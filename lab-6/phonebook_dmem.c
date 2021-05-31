/**
 * Лабораторная 6. Задание 1.
 *
 * phonebook_dmem.c -- программа, реализующая телефонный справочник с помощью структур. 
 * (Версия с использованием динамического выделения памяти)
 *
 * Copyright (c) 2021, Ruslan Sergeev <ruslansergeew@yandex.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define NAME_LENGTH 100
#define PHONE_NUMBER_LENGTH 13

#define ADD 1
#define SHOW 2
#define DELETE 3
#define FIND 4
#define EXIT 5


/* Структура, описывающая абонента */
struct subscriber {
    char name[NAME_LENGTH];
    char surname[NAME_LENGTH];
    char phone_number[PHONE_NUMBER_LENGTH];

    struct subscriber *next;    // Указатель на следующего абонента
    struct subscriber *prev;    // Указатель на предыдущего абонента
};

/* Структура справочника */
struct phonebook {
    struct subscriber *head;    // Указатель на первого абонента в справочнике
    struct subscriber *tail;    // Указатель на последнего абонента в справочнике
    uint16_t num_subscribers;   // Количество абонентов в справочнике
};

/* Функция, выводящая пункты меню */
void print_menu(struct phonebook *phonebook);

/* Добавить абонента */
void add_subscriber(struct phonebook *phonebook);

/* Вывести всех абонентов */
void print_all_subscribers(struct phonebook *phonebook);

/* Удалить абонента */
void delete_subscriber(struct phonebook *phonebook);

/* Найти абонента и вывести его */
void find_subscriber(struct phonebook *phonebook);

int main()
{
    struct phonebook *phonebook = NULL;     // Структура справочника
    phonebook->head = NULL;
    phonebook->tail = NULL;
    phonebook->num_subscribers = 0;

    uint16_t option = 0;                    // Опция, выбранная пользователем

    while (1) {
        print_menu();
        printf("Введите выбранную опцию:\n");
        scanf("%hu", &option);                  // Считываем опцию, выбранную пользователем
        switch(option) {
            case ADD:

                break;
            case SHOW:
                print_all_subscribers(phonebook);
                break;
            case DELETE:
                delete_subscriber(phonebook, &num_subscribers, vacant_space);
                break;
            case FIND:
                find_subscriber(phonebook);
                break;
            case EXIT:
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("%s", "Неизвестная опция!\n");
        }       
    }

    exit(EXIT_SUCCESS);
}

/* Функция, выводящая пункты меню */
void print_menu()
{
    printf("============================\n");
    printf("Телефонный справочник\n");
    printf("Меню:\n");
    printf("1 -- Добавить абонента.\n");
    printf("2 -- Вывести всех абонентов.\n");
    printf("3 -- Удалить абонента.\n");
    printf("4 -- Найти абонента.\n");
    printf("5 -- Выйти из справочника.\n\n");

    return;
}

/* Добавить абонента */
void add_subscriber()
{

    return;
}

/* Вывести всех абонентов */
void print_all_subscribers()
{

    return;
}

/* Удалить абонента */
void delete_subscriber()
{

    return;
}

/* Найти абонента и вывести его */
void find_subscriber()
{   

    return;
}
