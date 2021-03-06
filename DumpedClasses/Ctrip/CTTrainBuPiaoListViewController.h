//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTTrainBuPiaoListCellDelegate.h"

@class CTTableView, CTTrainBuPiaoListCacheBean, NSString;

@interface CTTrainBuPiaoListViewController : CTRootViewController <CTTrainBuPiaoListCellDelegate>
{
    id <CTTrainBuPiaoListViewControllerDelegate> _delegate;
    CTTrainBuPiaoListCacheBean *_shadowCacheBean;
    CTTableView *_tableViewBuPiaoList;
}

@property(retain, nonatomic) CTTableView *tableViewBuPiaoList; // @synthesize tableViewBuPiaoList=_tableViewBuPiaoList;
@property(retain, nonatomic) CTTrainBuPiaoListCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
@property(nonatomic) __weak id <CTTrainBuPiaoListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trainBuPiaoListCell:(id)arg1 didPressOrderButtonWithPlan:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableFooterView;
- (id)buPiaoListCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)onBackButton;
- (id)getDisplayDateWithDateString:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

