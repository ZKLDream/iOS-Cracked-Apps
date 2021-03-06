//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@class NSString;

@interface KGSongCommentListHttpDao : BaseHttpDao
{
    unsigned long long _commentType;
    NSString *_commentCode;
}

@property(copy, nonatomic) NSString *commentCode; // @synthesize commentCode=_commentCode;
@property(nonatomic) unsigned long long commentType; // @synthesize commentType=_commentType;
- (void).cxx_destruct;
- (id)getCommentV2WithChildrenId:(id)arg1 tid:(id)arg2 error:(id *)arg3;
- (void)likeCommentV2WithCommentID:(id)arg1 tid:(id)arg2 childrenid:(id)arg3 error:(id *)arg4;
- (id)getCommentLikeListV2WithCommentId:(id)arg1 childrenId:(id)arg2 pageNumber:(unsigned long long)arg3 pagesize:(unsigned long long)arg4 error:(id *)arg5;
- (void)reportCommentV2WithCommentId:(id)arg1 tid:(id)arg2 childrenId:(id)arg3 content:(id)arg4 error:(id *)arg5;
- (void)deleteCommentV2WithCommentId:(id)arg1 tid:(id)arg2 childrenID:(id)arg3 error:(id *)arg4;
- (id)addCommentReplyV2WithChildrenID:(id)arg1 childrenName:(id)arg2 postID:(id)arg3 tid:(id)arg4 is_t:(id)arg5 content:(id)arg6 error:(id *)arg7;
- (id)addCommentV2WithChildrenID:(id)arg1 childrenName:(id)arg2 postID:(id)arg3 content:(id)arg4 error:(id *)arg5;
- (id)getSongCommentReplyV2ListWithChildrenid:(id)arg1 tid:(id)arg2 pageNumber:(unsigned long long)arg3 pagesize:(unsigned long long)arg4 error:(id *)arg5;
- (id)getSongCommentListV2WithsongHash:(id)arg1 childrenid:(id)arg2 pageNumber:(unsigned long long)arg3 pagesize:(unsigned long long)arg4 error:(id *)arg5;
- (id)getMvCommentWithInfo:(id)arg1 AndError:(id *)arg2;
- (id)appendClientBasicParamsWithKey:(id)arg1;
- (id)appendClientBasicParams:(id)arg1;
- (id)getCodeAppendString;
- (id)descWithErrorCode:(long long)arg1;
- (long long)requestCommentNumsWithData:(id)arg1 error:(id *)arg2;
- (_Bool)deleteCommentWithCommentId:(id)arg1 withChildrenID:(id)arg2;
- (void)reportCommentInfoWithCommentId:(id)arg1 withChildrenId:(id)arg2 withContent:(id)arg3 error:(id *)arg4;
- (id)requestSongCommentCount:(id)arg1 error:(id *)arg2;
- (id)clientTimeString;
- (id)requestAddCommentWithChildrenID:(id)arg1 childrenName:(id)arg2 postID:(id)arg3 commentContent:(id)arg4 error:(id *)arg5;
- (_Bool)requestLikeCommentWithCommentID:(id)arg1 pIsLike:(_Bool *)arg2 error:(id *)arg3;
- (id)requestSongCommentListWithsongHash:(id)arg1 andChildrenid:(id)arg2 pageNumber:(unsigned long long)arg3 pagesize:(unsigned long long)arg4 askOnlyWifi:(_Bool)arg5 error:(id *)arg6;
- (id)requestSongCommentListWithsongHash:(id)arg1 andChildrenid:(id)arg2 pageNumber:(unsigned long long)arg3 pagesize:(unsigned long long)arg4 error:(id *)arg5;
- (id)init;

@end

