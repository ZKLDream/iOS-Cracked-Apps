//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FAActivityWebView, FALCBuyRichLevelModel, UIButton, UILabel;

@interface FALCRichLevelPayView : UIView
{
    long long _style;
    CDUnknownBlockType _closeBtnClickHandler;
    FALCBuyRichLevelModel *_model;
    CDUnknownBlockType _purchaseRichLevelFinishHandler;
    UIView *_topView;
    UIButton *_backBtn;
    UILabel *_titleLab;
    UILabel *_serviceLab;
    FAActivityWebView *_payWebView;
}

@property(retain, nonatomic) FAActivityWebView *payWebView; // @synthesize payWebView=_payWebView;
@property(retain, nonatomic) UILabel *serviceLab; // @synthesize serviceLab=_serviceLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType purchaseRichLevelFinishHandler; // @synthesize purchaseRichLevelFinishHandler=_purchaseRichLevelFinishHandler;
@property(retain, nonatomic) FALCBuyRichLevelModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType closeBtnClickHandler; // @synthesize closeBtnClickHandler=_closeBtnClickHandler;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)reloadPayView;
- (void)beginLoadPayWebViewWithURL:(id)arg1;
- (void)tapServiceLab:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(long long)arg2;

@end

