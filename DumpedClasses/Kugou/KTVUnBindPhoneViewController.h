//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseSettingViewController.h"

#import "UITextFieldDelegate.h"

@class KGThemeButton, KGThemeLabel, KTVPhoneNumberTextField, NSString, NSTimer, UIScrollView;

@interface KTVUnBindPhoneViewController : KTVBaseSettingViewController <UITextFieldDelegate>
{
    _Bool _changePhoneNum;
    _Bool _needAuthCard;
    NSString *_bindPhoneNum;
    unsigned long long _fromType;
    KTVBaseSettingViewController *_destionVC;
    id <KTVUnBindPhoneViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    KGThemeLabel *_phoneLabel;
    KTVPhoneNumberTextField *_vericationTextField;
    KGThemeButton *_sendvericationBtn;
    KGThemeButton *_nextBtn;
    long long _playerId;
    NSTimer *_timer;
    long long _timeCount;
}

@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) KGThemeButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) KGThemeButton *sendvericationBtn; // @synthesize sendvericationBtn=_sendvericationBtn;
@property(retain, nonatomic) KTVPhoneNumberTextField *vericationTextField; // @synthesize vericationTextField=_vericationTextField;
@property(retain, nonatomic) KGThemeLabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <KTVUnBindPhoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVBaseSettingViewController *destionVC; // @synthesize destionVC=_destionVC;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool needAuthCard; // @synthesize needAuthCard=_needAuthCard;
@property(nonatomic) _Bool changePhoneNum; // @synthesize changePhoneNum=_changePhoneNum;
@property(copy, nonatomic) NSString *bindPhoneNum; // @synthesize bindPhoneNum=_bindPhoneNum;
- (void).cxx_destruct;
- (void)pushToCertificationViewController;
- (void)pushToDestionVC;
- (void)dealloc;
- (void)onTextChanged:(id)arg1;
- (void)updateSendVericationState;
- (void)stopTimer;
- (void)startTimer;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)sendvericationBtnFun:(id)arg1;
- (void)postMobileMessage;
- (void)actionNext;
- (void)touchScrollView;
- (id)getTextFiedBackGroundViewWithOriginY:(double)arg1;
- (void)setupContentViews;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (id)init;
- (long long)showPlayBarWay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

