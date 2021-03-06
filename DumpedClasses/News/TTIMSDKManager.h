//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSTimer, TTIMListenerManager, TTIMMsgGroupModel, TTIMSDKOptions, TTIMSessionModel;

@interface TTIMSDKManager : NSObject
{
    _Bool _isNeedRelogin;
    _Bool _isIMOnline;
    id <TTIMDependDelegate> _dependDelegate;
    long long _lastUserId;
    TTIMSDKOptions *_mSDKOptions;
    TTIMListenerManager *_listenerManager;
    TTIMMsgGroupModel *_groupModel;
    TTIMSessionModel *_centerModel;
    NSTimer *_timer;
    NSMutableDictionary *_mLastGetGroupMsgInHasMore;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *mLastGetGroupMsgInHasMore; // @synthesize mLastGetGroupMsgInHasMore=_mLastGetGroupMsgInHasMore;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TTIMSessionModel *centerModel; // @synthesize centerModel=_centerModel;
@property(retain, nonatomic) TTIMMsgGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) TTIMListenerManager *listenerManager; // @synthesize listenerManager=_listenerManager;
@property(retain, nonatomic) TTIMSDKOptions *mSDKOptions; // @synthesize mSDKOptions=_mSDKOptions;
@property(nonatomic) long long lastUserId; // @synthesize lastUserId=_lastUserId;
@property(nonatomic) _Bool isIMOnline; // @synthesize isIMOnline=_isIMOnline;
@property(nonatomic) _Bool isNeedRelogin; // @synthesize isNeedRelogin=_isNeedRelogin;
@property(nonatomic) __weak id <TTIMDependDelegate> dependDelegate; // @synthesize dependDelegate=_dependDelegate;
- (void).cxx_destruct;
- (void)unRegisterSession:(id)arg1 listener:(id)arg2;
- (void)registerSession:(id)arg1 listener:(id)arg2;
- (void)markMsgReaded:(id)arg1;
- (void)markAllReaded:(id)arg1;
- (void)querySessionListWithOffset:(long long)arg1 limit:(long long)arg2;
- (void)queryCenterMsgList;
- (void)queryMsg:(id)arg1 mid:(long long)arg2 cid:(long long)arg3 limit:(long long)arg4;
- (void)queryMsg:(id)arg1 limit:(int)arg2;
- (void)clearSessionMsg:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)insertOrUpdateForPersonGroupWithMsgs:(id)arg1;
- (void)handleGetMsgResponse:(id)arg1;
- (void)destoryGetMsgTimer;
- (void)setupGetMsgTimer;
- (void)sendGetMsg:(id)arg1;
- (void)sendGetMsg;
- (void)handleNotifyNewMsg:(id)arg1;
- (_Bool)checkErrorCodeWithItem:(id)arg1;
- (void)handleMsg:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)addMessage:(id)arg1 session:(id)arg2;
- (void)addMessage:(id)arg1;
- (void)handleSendMsgResponse:(id)arg1;
- (void)sendMessage:(id)arg1 session:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)handleOfflineResponseMsg:(id)arg1;
- (void)sendOfflineMsg;
- (void)handleOnlineResponseMsg:(id)arg1;
- (void)sendOnlineMsg;
- (void)onLCSConnectionStateChangedToConnected:(_Bool)arg1;
- (void)onAppDidEnterBackground;
- (_Bool)isAccountValid;
- (void)logout;
- (void)reset;
- (void)login;
- (id)currentToken;
- (long long)currentDeviceId;
- (long long)currentUserId;
- (id)imsdkOptions;
- (void)bindDependDelegate:(id)arg1 options:(id)arg2;
- (void)addObservers;
- (id)init;
- (void)dealloc;

@end

