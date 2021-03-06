//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQNetworkStateMgr : NSObject
{
    int _networkState;
    int _UIShowState;
    _Bool _isUIShowMode;
    _Bool _isNetErrorShowed;
    int _netErrorShowTime;
}

+ (id)instance;
@property(readonly, nonatomic) int UIShowState; // @synthesize UIShowState=_UIShowState;
@property(readonly, nonatomic) int networkState; // @synthesize networkState=_networkState;
- (void)setUIShowMode:(_Bool)arg1 isCheckCurrentUIState:(_Bool)arg2;
- (void)updateUINetworkError;
- (void)updateUIShowState:(int)arg1 isRealRegisterOK:(_Bool)arg2;
- (void)updateMSFNetworkState:(int)arg1 isShowUI:(_Bool)arg2 errorTips:(id)arg3;
- (void)updateMSFServerForceClose;
- (const char *)UINetworkStateStr:(int)arg1;
- (id)init;

@end

