from collections import defaultdict


def solution(genres, plays):
    g_songs = defaultdict(dict)
    g_plays = defaultdict(int)
    g_songs_top = {}
    g_songs_top_number = defaultdict(dict)
    for i in range(len(genres)):
        g_songs[genres[i]][i] = plays[i]

        if g_songs_top.get(genres[i]) is None:
            g_songs_top[genres[i]] = plays[i]
            g_songs_top_number[genres[i]] = plays[i]

        if g_songs_top[genres[i]] < plays[i]:
            g_songs_top[genres[i]] = plays[i]
            g_songs_top_number[genres[i]] = plays[i]
        g_plays[genres[i]] += plays[i]

    sorted_g_songs_top = {k: v for k, v in sorted(g_songs_top.items(), key=lambda item: item[1], reverse=True)}
    print(sorted_g_songs_top)

    sorted_g_plays = {k: v for k, v in sorted(g_plays.items(), key=lambda item: item[1], reverse=True)}
    answer = []
    for k in sorted_g_plays.keys():
        sorted_g_songs = {k: v for k, v in sorted(g_songs[k].items(), key=lambda item: item[1], reverse=True)}
        answer += list(sorted_g_songs.keys())[:2]

    return answer