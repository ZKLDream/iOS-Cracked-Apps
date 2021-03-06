//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

#import "CAAnimationDelegate.h"

@class FAShakeActivityConfig, FASmallShakeConfigModel, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface FAShakeActivityView : FAView <CAAnimationDelegate>
{
    _Bool _isfull;
    _Bool _isShowingNotice;
    _Bool _isSmallShaking;
    _Bool _isBigShaking;
    _Bool _isGetBigShakeData;
    _Bool _isGetSmallShakeData;
    int _nEndShowNotice;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _willBackBlock;
    CDUnknownBlockType _viewWillDissmissHandler;
    id <ShowStatusDelegate> _delegate;
    UIImageView *_imgViewTop;
    NSTimer *_timer;
    UIImageView *_imgViewBigBox;
    UIImageView *_imgViewSmallBox;
    UILabel *_labBigBoxShakeTimes;
    UILabel *_labSmallShakeTimes;
    UIView *_viewNotice;
    UIView *_viewNoticeOne;
    UIView *_viewNoticeTwo;
    UIView *_viewNoticeThree;
    UILabel *_labNoticeOne;
    UILabel *_labNoticeTwo;
    UILabel *_labNoticeThree;
    UILabel *_labTimeNoticeOne;
    UILabel *_labTimeNoticeTwo;
    UILabel *_labTimeNoticeThree;
    FASmallShakeConfigModel *_model;
    FAShakeActivityConfig *_shakeActivityConfig;
    long long _roomID;
    NSMutableArray *_arrmNoticeStore;
    UITableView *_tableView;
    long long _bigShakeTimes;
    long long _smallShakeTimes;
    UIButton *_btnSmallShake;
    UIButton *_btnBigShake;
    NSTimer *_showBigBoxNoticeTimer;
    NSTimer *_showSmallBoxNoticeTimer;
    NSTimer *_showBigBoxWaitTextTimer;
    NSTimer *_showSmallBoxWaitTextTimer;
    UILabel *_labOpeningBigBoxing;
    UILabel *_labOpeningSmallBoxing;
}

@property(nonatomic) _Bool isGetSmallShakeData; // @synthesize isGetSmallShakeData=_isGetSmallShakeData;
@property(nonatomic) _Bool isGetBigShakeData; // @synthesize isGetBigShakeData=_isGetBigShakeData;
@property(retain, nonatomic) UILabel *labOpeningSmallBoxing; // @synthesize labOpeningSmallBoxing=_labOpeningSmallBoxing;
@property(retain, nonatomic) UILabel *labOpeningBigBoxing; // @synthesize labOpeningBigBoxing=_labOpeningBigBoxing;
@property(retain, nonatomic) NSTimer *showSmallBoxWaitTextTimer; // @synthesize showSmallBoxWaitTextTimer=_showSmallBoxWaitTextTimer;
@property(retain, nonatomic) NSTimer *showBigBoxWaitTextTimer; // @synthesize showBigBoxWaitTextTimer=_showBigBoxWaitTextTimer;
@property(retain, nonatomic) NSTimer *showSmallBoxNoticeTimer; // @synthesize showSmallBoxNoticeTimer=_showSmallBoxNoticeTimer;
@property(retain, nonatomic) NSTimer *showBigBoxNoticeTimer; // @synthesize showBigBoxNoticeTimer=_showBigBoxNoticeTimer;
@property(retain, nonatomic) UIButton *btnBigShake; // @synthesize btnBigShake=_btnBigShake;
@property(retain, nonatomic) UIButton *btnSmallShake; // @synthesize btnSmallShake=_btnSmallShake;
@property(nonatomic) long long smallShakeTimes; // @synthesize smallShakeTimes=_smallShakeTimes;
@property(nonatomic) long long bigShakeTimes; // @synthesize bigShakeTimes=_bigShakeTimes;
@property(nonatomic) _Bool isBigShaking; // @synthesize isBigShaking=_isBigShaking;
@property(nonatomic) _Bool isSmallShaking; // @synthesize isSmallShaking=_isSmallShaking;
@property(nonatomic) int nEndShowNotice; // @synthesize nEndShowNotice=_nEndShowNotice;
@property(nonatomic) _Bool isShowingNotice; // @synthesize isShowingNotice=_isShowingNotice;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *arrmNoticeStore; // @synthesize arrmNoticeStore=_arrmNoticeStore;
@property(nonatomic) long long roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) FAShakeActivityConfig *shakeActivityConfig; // @synthesize shakeActivityConfig=_shakeActivityConfig;
@property(retain, nonatomic) FASmallShakeConfigModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *labTimeNoticeThree; // @synthesize labTimeNoticeThree=_labTimeNoticeThree;
@property(retain, nonatomic) UILabel *labTimeNoticeTwo; // @synthesize labTimeNoticeTwo=_labTimeNoticeTwo;
@property(retain, nonatomic) UILabel *labTimeNoticeOne; // @synthesize labTimeNoticeOne=_labTimeNoticeOne;
@property(retain, nonatomic) UILabel *labNoticeThree; // @synthesize labNoticeThree=_labNoticeThree;
@property(retain, nonatomic) UILabel *labNoticeTwo; // @synthesize labNoticeTwo=_labNoticeTwo;
@property(retain, nonatomic) UILabel *labNoticeOne; // @synthesize labNoticeOne=_labNoticeOne;
@property(retain, nonatomic) UIView *viewNoticeThree; // @synthesize viewNoticeThree=_viewNoticeThree;
@property(retain, nonatomic) UIView *viewNoticeTwo; // @synthesize viewNoticeTwo=_viewNoticeTwo;
@property(retain, nonatomic) UIView *viewNoticeOne; // @synthesize viewNoticeOne=_viewNoticeOne;
@property(retain, nonatomic) UIView *viewNotice; // @synthesize viewNotice=_viewNotice;
@property(retain, nonatomic) UILabel *labSmallShakeTimes; // @synthesize labSmallShakeTimes=_labSmallShakeTimes;
@property(retain, nonatomic) UILabel *labBigBoxShakeTimes; // @synthesize labBigBoxShakeTimes=_labBigBoxShakeTimes;
@property(retain, nonatomic) UIImageView *imgViewSmallBox; // @synthesize imgViewSmallBox=_imgViewSmallBox;
@property(retain, nonatomic) UIImageView *imgViewBigBox; // @synthesize imgViewBigBox=_imgViewBigBox;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isfull; // @synthesize isfull=_isfull;
@property(retain, nonatomic) UIImageView *imgViewTop; // @synthesize imgViewTop=_imgViewTop;
@property(nonatomic) __weak id <ShowStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType viewWillDissmissHandler; // @synthesize viewWillDissmissHandler=_viewWillDissmissHandler;
@property(copy, nonatomic) CDUnknownBlockType willBackBlock; // @synthesize willBackBlock=_willBackBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)updateNoticeViewArr:(id)arg1;
- (void)updateCoin;
- (_Bool)enoughMoneyBigShake:(_Bool)arg1 BoxClick:(_Bool)arg2;
- (void)openChargeViewController;
- (void)updateNoticeViewInfo:(id)arg1;
- (void)pushNotice:(id)arg1;
- (id)convertMinSecondToTime:(long long)arg1;
- (void)timerClose;
- (id)noticeTest:(id)arg1;
- (void)getBigShakeDataDone;
- (void)getSmallShakeDataDone;
- (void)smallBoxWaitTextTimerClose;
- (void)bigBoxWaitTextTimerClose;
- (void)smallBoxNoticeTimerClose;
- (void)bigBoxNoticeTimerClose;
- (void)noticeSmallBoxTestTimerStar;
- (void)noticeBigBoxTestTimerStar;
- (void)noticeBigBoxTimerStar;
- (void)noticeSmallBoxTimerStar;
- (void)timerStar;
- (void)updateNoticeView;
- (void)showNotice;
- (void)showBigGiftAnimGiftBigBox:(id)arg1 SmallBox:(id)arg2;
- (void)updateTimes;
- (void)setShakeTimesBigBox:(_Bool)arg1 Times:(long long)arg2;
- (void)getShakeInfo;
- (void)resetBoxImg:(id)arg1;
- (void)pushNoticeAnimationTop:(float)arg1;
- (void)checkIsLogin;
- (void)smallShake:(_Bool)arg1;
- (void)smallShakeClick;
- (void)smallShakeClickGes;
- (void)bigShake:(_Bool)arg1;
- (void)bigShakeClick;
- (void)bigShakeClickGes;
- (void)btnClick:(id)arg1;
- (void)dealloc;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 FullScreen:(_Bool)arg2 RoomType:(int)arg3 RoomID:(long long)arg4 BigShakeTimes:(long long)arg5 SmallShakeTimes:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

