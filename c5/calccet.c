#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


typedef char Word[100];

typedef struct {
  Word word;
  int count;
} WordItem;


/**
 * 从句子 sentence 提取出单词，放在 buf.word 中
 */
void read_word(Word buf, char *sentence) {
  int i = 0;
  while (isalpha(sentence[i])) {
    buf[i] = sentence[i];
    i++;
  }
  buf[i] = '\0';
}


/**
 * 从文件 path 中读取单词，放到 WordItem 数组中
 * 返回读取到的单词数量， （意味着WordItem数组的容量要求比 count 大)
 */
int read_words(WordItem *words, char *path) {
  FILE *fp = fopen(path, "r");
  char buf[1000];  // 假设单词表句子不长于1000个字节
  int count = 0;
  while (fgets(buf, sizeof(buf), fp)) {
    read_word(words[count].word, buf);
    count++;
  }
  fclose(fp);
  return count;
}


void stat_words(WordItem *items, int count, char *path) {
  FILE *fp = fopen(path, "r");
  char buf[1000];
  while (fgets(buf, sizeof(buf), fp)) {
    char *token = strtok(buf, " ");
    while (token) {
      for (int i = 0; i < count; i++) {
        if (strcmp(items[i].word, token) == 0) {
          items[i].count++;
        }
      }
      token = strtok(NULL, " ");
    }
  }
  fclose(fp);
}


/**
 * 比较函数：从大小到排列
 */
int word_comp(WordItem *a, WordItem *b) {
  return b->count - a->count;
}


void output(WordItem *items, int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (items[i].count) {
      printf("%s (%d)\n", items[i].word, items[i].count);
      count++;
    }
  }

  printf("共计 %d 个单词", count);
}


int main(int argc, char **argv) {
  // 假设单词表不会超过10000个单词
  // 目前使用的表是2000多个
  // 如果单词表更大，只要改大这个数字即可
  WordItem items[10000];

  // 从文件读得单词表
  int count = read_words(items, argv[1]);

  // 统计文件中单词出现的频率

  stat_words(items, count, argv[2]);

  // 排序
  qsort(items, count, sizeof(WordItem), word_comp);

  // 输出
  output(items, count);
}

