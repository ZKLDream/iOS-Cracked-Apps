//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCDotLoadingView, DCOrderLiftTimePicker, DCOrderPriceFooterView, DCReleaseIdLesseCheckModel, MASConstraint, NSAttributedString, NSString, UIView;

@interface DCOrderLiftDatePicker : DCEmergeCustomBaseView
{
    _Bool _selectTimeContainsWeek;
    _Bool _idlessChecked;
    DCOrderLiftTimePicker *_timePicker;
    CDUnknownBlockType _tapped;
    CDUnknownBlockType _confirmActionBlock;
    CDUnknownBlockType _retryBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _clickCancelButtonBlock;
    DCDotLoadingView *_loadingView;
    DCOrderPriceFooterView *_idlessCheckView;
    UIView *_seperateLine;
    long long _state;
    MASConstraint *_topConstraint;
    MASConstraint *_bottomConstraint;
    DCReleaseIdLesseCheckModel *_idlessCheckModel;
}

@property(retain, nonatomic) DCReleaseIdLesseCheckModel *idlessCheckModel; // @synthesize idlessCheckModel=_idlessCheckModel;
@property(retain, nonatomic) MASConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) MASConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) _Bool idlessChecked; // @synthesize idlessChecked=_idlessChecked;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) DCOrderPriceFooterView *idlessCheckView; // @synthesize idlessCheckView=_idlessCheckView;
@property(retain, nonatomic) DCDotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool selectTimeContainsWeek; // @synthesize selectTimeContainsWeek=_selectTimeContainsWeek;
@property(copy, nonatomic) CDUnknownBlockType clickCancelButtonBlock; // @synthesize clickCancelButtonBlock=_clickCancelButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmActionBlock; // @synthesize confirmActionBlock=_confirmActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(retain, nonatomic) DCOrderLiftTimePicker *timePicker; // @synthesize timePicker=_timePicker;
- (void).cxx_destruct;
- (void)addTappedRecognizer;
- (void)tapAction:(id)arg1;
- (void)setupWithState:(long long)arg1 errorDesc:(id)arg2;
- (void)commitWithDate:(id)arg1 formatDate:(id)arg2 timePreference:(id)arg3;
- (void)hideTimePreference;
@property(retain, nonatomic) NSAttributedString *subTitle;
- (void)configIdlessCheckViewWithText:(id)arg1 checked:(_Bool)arg2;
- (void)reloadDatePickerData;
- (void)updateIdlessCheckModel:(id)arg1;
- (void)makeAutoLayout;
- (void)setupTimePicker:(CDUnknownBlockType)arg1;
- (void)setUpSubviews;
- (id)initWithIdlesseCheckModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *title;

@end
