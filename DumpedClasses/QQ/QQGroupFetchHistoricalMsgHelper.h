//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQLockDictionary;

@interface QQGroupFetchHistoricalMsgHelper : NSObject
{
    QQLockDictionary *_requestDic;
    QQLockDictionary *_requestGroupRoamMessagesDic;
    QQLockDictionary *_inviteUinDic;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (long long)seekInsertIndexForSplitLine:(id)arg1 chatMessages:(id)arg2;
- (_Bool)insertSplitLineIfNeccessary:(id)arg1;
- (void)createJoinGroupGrayTip:(id)arg1 msgSeq:(long long)arg2 time:(unsigned long long)arg3;
- (long long)getJoinGroupMaxSeq:(id)arg1;
- (long long)getLocalTime;
- (long long)getJoinGroupTime:(id)arg1;
- (id)filterDuplicatedMessages:(id)arg1;
- (void)actionGetGroupMessage:(id)arg1;
- (int)getGroupMessage:(id)arg1 begin:(long long)arg2 last:(long long)arg3 silent:(_Bool)arg4;
- (void)getHistoricalMessageProactivelyWhenJoinGroup:(id)arg1 endSeq:(unsigned long long)arg2 count:(long long)arg3;
- (void)onGetHistoricalMsgInfo:(id)arg1;
- (void)fetchHistoricalMsgInfo:(id)arg1;
- (void)fetchRequisiteInfoAndCreateJoinGroupGrayTip:(id)arg1 inviteUin:(unsigned long long)arg2;
- (void)preloadConfigInfoWithGroupCode:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

