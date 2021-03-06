//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PPao_CircleButton, QYPPCircleHomeData, QYPPFansLevelLabel, QYPPUICircleLevelProgress, QYPPUICircleTaskButton, QYPPUICircleTaskTip, UIButton, UIImageView, UILabel;

@interface PPao_StarCircleHeaderView : UIView
{
    UIImageView *_headerIcon;
    UILabel *_nameLabel;
    UILabel *_fansLabel;
    UIImageView *_subHeaderIcon;
    UILabel *_subNameLabel;
    _Bool _isAnimating;
    _Bool _lastShow;
    id _delegate;
    NSString *_fromDynamicListTag;
    QYPPCircleHomeData *_viewData;
    UIView *_subTopView;
    PPao_CircleButton *_joinButton;
    UIButton *_rankButton;
    QYPPUICircleTaskButton *_checkInButton;
    QYPPUICircleTaskButton *_hitButton;
    QYPPUICircleTaskTip *_signTip;
    QYPPFansLevelLabel *_fansLevel;
    QYPPUICircleLevelProgress *_levelProgress;
    UIButton *_levelClickView;
    UIButton *_subRankButton;
    PPao_CircleButton *_subJoinButton;
}

@property(retain, nonatomic) PPao_CircleButton *subJoinButton; // @synthesize subJoinButton=_subJoinButton;
@property(retain, nonatomic) UIButton *subRankButton; // @synthesize subRankButton=_subRankButton;
@property(retain, nonatomic) UIButton *levelClickView; // @synthesize levelClickView=_levelClickView;
@property(retain, nonatomic) QYPPUICircleLevelProgress *levelProgress; // @synthesize levelProgress=_levelProgress;
@property(retain, nonatomic) QYPPFansLevelLabel *fansLevel; // @synthesize fansLevel=_fansLevel;
@property(retain, nonatomic) QYPPUICircleTaskTip *signTip; // @synthesize signTip=_signTip;
@property(retain, nonatomic) QYPPUICircleTaskButton *hitButton; // @synthesize hitButton=_hitButton;
@property(retain, nonatomic) QYPPUICircleTaskButton *checkInButton; // @synthesize checkInButton=_checkInButton;
@property(retain, nonatomic) UIButton *rankButton; // @synthesize rankButton=_rankButton;
@property(retain, nonatomic) PPao_CircleButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UIView *subTopView; // @synthesize subTopView=_subTopView;
@property(retain, nonatomic) QYPPCircleHomeData *viewData; // @synthesize viewData=_viewData;
@property(copy, nonatomic) NSString *fromDynamicListTag; // @synthesize fromDynamicListTag=_fromDynamicListTag;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateUserLevel:(id)arg1;
- (id)getSubHeaderView;
- (id)getHeaderView;
- (id)getJoinButton;
- (id)getCheckInButton;
- (id)getHitButton;
- (void)showSignInTip:(id)arg1 theme:(int)arg2;
- (void)checkSignTipAndButton;
- (void)setCheckInButtonWithStatu:(int)arg1 Duration:(id)arg2;
- (_Bool)isSubTopShown;
- (void)showSubTopView:(_Bool)arg1;
- (void)updateSubTopView:(id)arg1;
- (void)setData:(id)arg1;
- (id)subTopViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

