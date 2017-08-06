//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UserLoginViewControllerDelegate.h"

@class KGDefaultNetErrorView, KTVAppStorePaymentHandler, KTVCommonTableViewRE, KtvRechargeOptionVM, NSMutableArray, NSString, UIAlertView, UITableViewCell;

@interface KTVRechargeView : UIView <KTVTableViewDataSource, KTVTableViewDelegate, UserLoginViewControllerDelegate, UIAlertViewDelegate>
{
    NSMutableArray *dataArray;
    KTVCommonTableViewRE *tableview;
    KtvRechargeOptionVM *rechargeOption;
    KTVAppStorePaymentHandler *checker;
    UIAlertView *alert;
    UITableViewCell *appStorePayIsBackCell;
    _Bool _isBreak;
    _Bool _appStorePayIsBack;
    id <KTVRechargeViewDelagate> _delegate;
    KGDefaultNetErrorView *_errorView;
}

@property(nonatomic) _Bool appStorePayIsBack; // @synthesize appStorePayIsBack=_appStorePayIsBack;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool isBreak; // @synthesize isBreak=_isBreak;
@property(nonatomic) __weak id <KTVRechargeViewDelagate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)actionBuy:(id)arg1;
- (void)actionAfterLoginBuy;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setKMoney:(id)arg1;
- (long long)getKcoin;
- (long long)getMoney;
- (id)scrollView;
- (void)refreshData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
