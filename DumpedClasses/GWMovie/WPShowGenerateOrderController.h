//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WPBaseBottomBarDelegate-Protocol.h"
#import "WPShowGenerateOrderSendMethodCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, WPOrderReaminingTimeView, WPPayOrderBottomBar, WPShowPayAssistManager;

@interface WPShowGenerateOrderController : GWBaseViewController <UITableViewDelegate, UITableViewDataSource, WPShowGenerateOrderSendMethodCellDelegate, WPBaseBottomBarDelegate>
{
    WPOrderReaminingTimeView *_timeView;
    UITableView *_tableView;
    WPPayOrderBottomBar *_bottomBar;
    WPShowPayAssistManager *_payAssistManager;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) WPShowPayAssistManager *payAssistManager; // @synthesize payAssistManager=_payAssistManager;
@property(retain, nonatomic) WPPayOrderBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WPOrderReaminingTimeView *timeView; // @synthesize timeView=_timeView;
- (void).cxx_destruct;
- (void)wp_keyboardWillShowOrHideNotification:(id)arg1;
- (void)gotoPaymentOrderViewController;
- (void)wp_bottomBarButtonClick:(id)arg1;
- (void)wp_gotoAddressListViewController;
- (void)wp_tableViewShouldReloadData;
- (void)reloadData;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestUserAddress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupTableView;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOrderTicketMode:(id)arg1;
- (_Bool)checkInputDataIsLegal:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

