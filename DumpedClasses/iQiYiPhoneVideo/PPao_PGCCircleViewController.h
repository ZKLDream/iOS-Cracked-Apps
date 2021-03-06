//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPao_CircleViewController.h"

#import "PPao_PGCHeaderViewDeleate-Protocol.h"
#import "PPao_PGCRewardViewDelegate-Protocol.h"
#import "QYPPPGCRewardDoneCallbackDelegate-Protocol.h"

@class NSString, PPao_PGCRewardView, UIView;

@interface PPao_PGCCircleViewController : PPao_CircleViewController <PPao_PGCHeaderViewDeleate, PPao_PGCRewardViewDelegate, QYPPPGCRewardDoneCallbackDelegate>
{
    UIView *_infoView;
    PPao_PGCRewardView *_pgcRewardView;
}

@property(retain, nonatomic) PPao_PGCRewardView *pgcRewardView; // @synthesize pgcRewardView=_pgcRewardView;
- (void).cxx_destruct;
- (void)circleManager:(id)arg1 rewardFailureWithData:(id)arg2;
- (void)circleManager:(id)arg1 rewardSucceedWithData:(id)arg2;
- (void)updateSubViewControllers;
- (void)addCircleNotification;
- (void)subViewController:(id)arg1 slideUp:(_Bool)arg2 percent:(double)arg3;
- (void)handleHeaderView:(double)arg1;
- (void)handleNavigationBarHideScrollDown:(id)arg1;
- (void)handleNavigationBarHideScrollUp:(id)arg1;
- (void)adjustNavigationBar:(id)arg1 scrollPercent:(double)arg2;
- (void)adjustStatusBar:(double)arg1;
- (void)subViewController:(id)arg1 scrollPercent:(double)arg2;
- (void)rewardViewRewardClick:(id)arg1;
- (void)headerViewClickJoin:(id)arg1;
- (void)headerViewClickHead:(id)arg1;
- (void)headerViewClickFans:(id)arg1;
- (void)publish;
- (void)infoViewClick:(id)arg1;
- (void)handleLoginEvent:(id)arg1 loginSuccess:(CDUnknownBlockType)arg2;
- (void)more;
- (void)privateChat;
- (void)setting;
- (_Bool)isHost;
- (void)autoActions;
- (void)updateOwnerInfo;
- (void)updateTabTypeIfNeed;
- (void)viewSourceDidFailure:(id)arg1;
- (void)updateForPGCHost;
- (void)viewSourceDidFinish:(id)arg1;
- (void)updateRightItems;
- (void)loadTopView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

