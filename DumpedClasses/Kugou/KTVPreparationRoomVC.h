//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KGViewControllerDelegate.h"
#import "KTVSelectingAccVLLDelegate.h"
#import "TabViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class KTVOpusShareVC, KTVSelectingAccVLL, KTVSelectingAccVM, KTVSelectingAccView, NSString, NSTimer, UIAlertView;

@interface KTVPreparationRoomVC : KTVViewController <KGViewControllerDelegate, TabViewDelegate, KTVSelectingAccVLLDelegate, UIAlertViewDelegate>
{
    _Bool _needOffsetToAccompanyTable;
    _Bool _topAccompanyReflashAble;
    _Bool _isOnShow;
    _Bool _isStopAccompanyReflash;
    int _songListIndex;
    KTVSelectingAccView *_seletingAccView;
    KTVSelectingAccVM *_seletingAccVM;
    KTVSelectingAccVLL *_seletingAccVLL;
    NSTimer *_timer;
    KTVOpusShareVC *_shareVC;
    UIAlertView *_alertview;
    UIAlertView *_alertView;
}

@property(nonatomic) _Bool isStopAccompanyReflash; // @synthesize isStopAccompanyReflash=_isStopAccompanyReflash;
@property(nonatomic) int songListIndex; // @synthesize songListIndex=_songListIndex;
@property(nonatomic) _Bool isOnShow; // @synthesize isOnShow=_isOnShow;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool topAccompanyReflashAble; // @synthesize topAccompanyReflashAble=_topAccompanyReflashAble;
@property(nonatomic) _Bool needOffsetToAccompanyTable; // @synthesize needOffsetToAccompanyTable=_needOffsetToAccompanyTable;
@property(retain, nonatomic) UIAlertView *alertview; // @synthesize alertview=_alertview;
@property(retain, nonatomic) KTVOpusShareVC *shareVC; // @synthesize shareVC=_shareVC;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KTVSelectingAccVLL *seletingAccVLL; // @synthesize seletingAccVLL=_seletingAccVLL;
@property(retain, nonatomic) KTVSelectingAccVM *seletingAccVM; // @synthesize seletingAccVM=_seletingAccVM;
@property(retain, nonatomic) KTVSelectingAccView *seletingAccView; // @synthesize seletingAccView=_seletingAccView;
- (void).cxx_destruct;
- (void)dismissKSongViewChorusGuidance;
- (void)actionCappella;
- (void)actionChorus;
- (void)freshTopStateWithTableType:(int)arg1;
- (void)actionTogetherSing;
- (void)actionSelectedSong;
- (void)actionHot;
- (void)actionSingerSong;
- (void)actionSearch;
- (void)actionBanner:(id)arg1;
- (void)selectingAccVll:(id)arg1 beginReflashTopAccompany:(_Bool)arg2;
- (void)selectingAccVll:(id)arg1 beginSingAccInfo:(id)arg2;
- (void)selectingAccVll:(id)arg1 selectedCellAccInfo:(id)arg2;
- (void)selectingAccVLLSearchAcommpany:(id)arg1;
- (void)selectingAccVLLMoreTheme:(id)arg1;
- (void)selectingAccVLLMoreSingerCategory:(id)arg1;
- (void)selectingAccVLL:(id)arg1 showSingerListForCategory:(int)arg2;
- (void)timerClick;
- (void)endTopAccompanyReflash;
- (void)beginTopAccompanyReflash;
- (void)vcWillEnterBackground;
- (void)vcWillEnterForeground;
- (void)registerNotification;
- (void)dealloc;
- (void)viewWillRemove;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)createSeletingAccVM;
- (void)showSeletingView;
- (void)creatSeletingView;
- (void)offsetToAccompanyTableWhenSeletingArea;
- (void)viewDidLoad;
- (id)init;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
