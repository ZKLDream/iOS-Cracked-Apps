//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseWebViewController.h"

#import "CLLocationManagerDelegate.h"
#import "UIWebViewDelegate.h"

@class CLLocationManager, NSNumber, NSString, RACSubject, TaxiOrderData;

@interface TaxiCancelOrderViewController : TaxiBaseWebViewController <UIWebViewDelegate, CLLocationManagerDelegate>
{
    _Bool _isCancelSuccess;
    CDUnknownBlockType _cancelOrderFeedBack;
    RACSubject *_observerRoute;
    CLLocationManager *_locationManager;
    CDUnknownBlockType _responseCallback;
    TaxiOrderData *_orderData;
    NSNumber *_etaTime;
}

+ (void)load;
@property(retain, nonatomic) NSNumber *etaTime; // @synthesize etaTime=_etaTime;
@property(nonatomic) _Bool isCancelSuccess; // @synthesize isCancelSuccess=_isCancelSuccess;
@property(retain, nonatomic) TaxiOrderData *orderData; // @synthesize orderData=_orderData;
@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) RACSubject *observerRoute; // @synthesize observerRoute=_observerRoute;
@property(copy, nonatomic) CDUnknownBlockType cancelOrderFeedBack; // @synthesize cancelOrderFeedBack=_cancelOrderFeedBack;
- (void).cxx_destruct;
- (void)responseToJsBrige:(struct CLLocationCoordinate2D)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)clearOrderData;
- (void)cancelFailed;
- (void)cancelSuccess;
- (void)cancelOrderSuccess:(id)arg1;
- (void)pushToBranchOrder:(id)arg1;
- (_Bool)isRealTimeControl;
- (id)caculateDriverLateTime:(id)arg1;
- (id)additionalUrl;
- (void)backEvent:(id)arg1;
- (id)baseUrl;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithOrderData:(id)arg1 isCancelSuccess:(_Bool)arg2 etaTime:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

