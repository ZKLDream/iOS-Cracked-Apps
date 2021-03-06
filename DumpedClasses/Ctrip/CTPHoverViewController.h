//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPVerifyPayBaseView, CTVerifyPayCompentParametersModel, NSMutableArray, NSMutableDictionary;

@interface CTPHoverViewController : NSObject
{
    CTPVerifyPayBaseView *_hoverView;
    unsigned long long _hoverViewType;
    CTVerifyPayCompentParametersModel *_hoverModel;
    NSMutableArray *_payDisplaySettings;
    NSMutableDictionary *_rapidPayTexts;
    id <CTPRapidPaymentPayInfoProtocol> _payInfoDelegate;
}

@property(nonatomic) __weak id <CTPRapidPaymentPayInfoProtocol> payInfoDelegate; // @synthesize payInfoDelegate=_payInfoDelegate;
@property(retain, nonatomic) NSMutableDictionary *rapidPayTexts; // @synthesize rapidPayTexts=_rapidPayTexts;
@property(retain, nonatomic) NSMutableArray *payDisplaySettings; // @synthesize payDisplaySettings=_payDisplaySettings;
@property(retain, nonatomic) CTVerifyPayCompentParametersModel *hoverModel; // @synthesize hoverModel=_hoverModel;
@property(nonatomic) unsigned long long hoverViewType; // @synthesize hoverViewType=_hoverViewType;
@property(retain, nonatomic) CTPVerifyPayBaseView *hoverView; // @synthesize hoverView=_hoverView;
- (void).cxx_destruct;
- (id)getDisplay:(unsigned long long)arg1 model:(id)arg2;
- (void)refreshHoverModel:(id)arg1;
- (void)loadHoverView:(unsigned long long)arg1 fail:(CDUnknownBlockType)arg2 next:(CDUnknownBlockType)arg3;
- (id)loadHoverViewModel;
- (id)createHoverView:(id)arg1 fail:(CDUnknownBlockType)arg2 next:(CDUnknownBlockType)arg3;
- (void)resignFocus;
- (void)resetCode;
- (void)getFocus;
- (_Bool)reloadContentWithInfo:(id)arg1;
- (id)getPayDisplay:(int)arg1;
- (id)initWithPayInfoDelegate:(id)arg1;

@end

