//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "QYCardPingBackProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString, QYUCardDataV3, QYUCardEventV3, UIView;

@protocol QYPhonePannelCotrollerDelegate <NSObject, QYCardPingBackProtocol>

@optional
- (void)showAlertCancelVerified;
- (void)gotoLogin:(int)arg1;
- (UIView *)getPlayerControlView;
- (NSArray *)fakeCommentBlockDicArray;
- (void)refreshPingbackCardsWithAliasArray:(NSArray *)arg1 isUpdateAll:(_Bool)arg2;
- (void)requestSpoilerDataByExtra:(NSDictionary *)arg1;
- (void)sendCTPlayPingbackByEvent:(QYUCardEventV3 *)arg1 cardData:(QYUCardDataV3 *)arg2;
- (void)sendShowPingbackWithRepeatString:(NSString *)arg1 withEvent:(QYUCardEventV3 *)arg2 cardData:(QYUCardDataV3 *)arg3;
- (void)sendShowPingbackByEvent:(QYUCardEventV3 *)arg1 cardData:(QYUCardDataV3 *)arg2 needCheckRepeat:(_Bool)arg3;
- (void)sendClickPingbackByEvent:(QYUCardEventV3 *)arg1 cardData:(QYUCardDataV3 *)arg2;
- (NSDictionary *)getCardDataDictionaryWithAliasName:(NSString *)arg1;
- (void)invokeBuyVipViewFromCache;
- (_Bool)existDolbyAudioTrack;
- (void)sendAdStock:(unsigned int)arg1 event:(int)arg2;
- (void)refresChatRoomFrame;
- (void)doSaveBtnByPannel:(id)arg1 isSave:(_Bool)arg2;
- (void)refreshPaoPaoFeedData:(NSString *)arg1 nexturl:(NSString *)arg2;
- (void)setChatRoomInputViewStatus:(_Bool)arg1;
- (void)chatRoomResignKeyboard;
- (void)feedLaunchLoginPageWithObject:(id)arg1;
- (void)updateDownloadBtnByState:(int)arg1;
- (void)phonePannelControl:(int)arg1 object:(id)arg2;
- (_Bool)getIsShortVideo;
- (void)loginDidFinished:(int)arg1;
- (void)showBuyVipFromCache;
- (void)retryAllRequestByPannelController;
- (void)retryRequestByPannelController;
- (void)requestAllEpisodeByDockType:(int)arg1;
- (void)updateEpisodeState;
- (void)changePlayByUserType:(int)arg1 data:(id)arg2 vvlogDic:(NSDictionary *)arg3;
- (int)currentMode;
- (_Bool)isCardRequestFinish;
- (_Bool)isAllPartRequestFinish;
@end

