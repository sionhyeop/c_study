#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TITLE_LENGTH (50)
#define SINGER_LENGTH (25)
#define PATH_LENGTH (100)

typedef enum menu
{
    MENU_ADD = 1,
    MENU_PRINT,
    MENU_SEARCH,
    MENU_DELETE,
    MENU_EXIT
} menu_t;

typedef enum genre
{
    GENRE_KPOP,
    GENRE_POP,
    GENRE_CLASSIC,
    GENRE_BGM
} genre_t;

typedef struct music
{
    char title[TITLE_LENGTH];
    char singer[SINGER_LENGTH];
    char path[PATH_LENGTH];
    genre_t genre;
} music_t;

int currentIndex = 0;

void print_field_name();
void add_music(music_t *musics);
void show_details(const music_t *music);
music_t *search_by_title(const music_t *musics, const char *title);

int main(void)
{
    music_t musics[25];
    menu_t menu;

    while (1)
    {
        printf("=============\n");
        printf("1. 추가\n");
        printf("2. 출력\n");
        printf("3. 검색\n");
        printf("4. 삭제\n");
        printf("5. 종료\n");
        printf("=============\n");

        printf("정수값을 입력하시오: ");
        scanf("%d", &menu);
        getchar();

        switch (menu)
        {
        case MENU_ADD:
            add_music(musics);
            break;

        case MENU_PRINT:
            print_field_name();
            for (int i = 0; i < currentIndex; i++)
            {
                printf("%2d ", i);
                show_details(&musics[i]);
            }
            break;

        case MENU_SEARCH:
            printf("찾을 노래의 제목: ");
            char searching_title[TITLE_LENGTH];
            gets_s(searching_title, TITLE_LENGTH);
            music_t *result = search_by_title(musics, searching_title);
            if (result == NULL)
            {
                printf("해당 노래를 찾을 수 없습니다.\n");
            }
            else
            {
                print_field_name();
                show_details(result);
            }
            break;

        case MENU_DELETE:
            currentIndex--;
            break;

        case MENU_EXIT:
            return 0;

        default:
            printf("잘못된 입력\n");
            break;
        }
        printf("\n\n");
    }
}

void print_field_name()
{
    printf("id 제목\t\t가수\t\t위치\t\t장르\n");
    printf("========================================================\n");
}

void add_music(music_t *musics)
{
    printf("제목: ");
    gets_s(musics[currentIndex].title, TITLE_LENGTH);
    printf("가수: ");
    gets_s(musics[currentIndex].singer, SINGER_LENGTH);
    printf("위치: ");
    gets_s(musics[currentIndex].path, PATH_LENGTH);
    printf("장르(0=가요, 1=팝, 2=클래식, 3=영화음악): ");
    scanf(" %d", &musics[currentIndex].genre);
    currentIndex++;
}

void show_details(const music_t *music)
{
    printf("%s\t\t", music->title);
    printf("%s\t\t", music->singer);
    printf("%s\t\t", music->path);
    printf("%d\n", music->genre);
}

music_t *search_by_title(const music_t *musics, const char *title)
{
    for (int i = 0; i < currentIndex; i++)
    {
        if (strcmp(title, musics[i].title) == 0)
        {
            return &musics[i];
        }
    }
    return NULL;
}