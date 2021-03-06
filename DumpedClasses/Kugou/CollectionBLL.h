//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CollectionBLL : NSObject
{
}

- (_Bool)isNetCollect;
- (id)queryCollectEntityList:(id)arg1;
- (void)setMyLikeListOffLineState:(_Bool)arg1 AndError:(id *)arg2;
- (id)getMyLikeListEntityInfo;
- (void)deleteSongsFromMyLikeList:(id)arg1 AndError:(id *)arg2;
- (id)songExistInMyLikeList:(id)arg1;
- (void)addSongsToMyLikeList:(id)arg1 AndError:(id *)arg2;
- (id)updateSongEntitys:(id)arg1 sourceIndex:(unsigned long long)arg2 ToIndex:(unsigned long long)arg3 AndError:(id *)arg4;
- (void)updateSongEntitys:(id)arg1 AndError:(id *)arg2;
- (void)deleteSongFromList:(id)arg1 AndError:(id *)arg2;
- (_Bool)queryYuekuRcmShouldShowGuessYouLike;
- (id)queryMyLikeSongs;
- (_Bool)stickEntityAtIndex:(int)arg1 list:(id)arg2;
- (_Bool)songExistInCollectList:(id)arg1 songInfo:(id)arg2;
- (unsigned long long)getUsedTotalCount;
- (long long)getUsedTotalSize;
- (id)querySongsFormListOrderByFileId:(id)arg1;
- (id)querySongsFromList:(id)arg1;
- (id)queryListsWithoutMyLike;
- (id)queryLists;
- (void)deleteList:(id)arg1 AndError:(id *)arg2;
- (void)addSongToList:(id)arg1 AndSong:(id)arg2 AndError:(id *)arg3;
- (unsigned long long)addSongToList:(id)arg1 AndSongs:(id)arg2 AndError:(id *)arg3;
- (id)getListEntityWithListName:(id)arg1;
- (void)updateList:(id)arg1 AndOffLineState:(_Bool)arg2 AndError:(id *)arg3;
- (void)updateListName:(id)arg1 AndNewListName:(id)arg2 AndError:(id *)arg3;
- (void)updateListIcon:(id)arg1 AndNewListIcon:(id)arg2 AndMaxFieldHash:(id)arg3 AndError:(id *)arg4;
- (id)addListWithName:(id)arg1 AndError:(id *)arg2;
- (void)verifyCanAddSongs:(id)arg1 WithListEntity:(id)arg2 AndError:(id *)arg3;

@end

