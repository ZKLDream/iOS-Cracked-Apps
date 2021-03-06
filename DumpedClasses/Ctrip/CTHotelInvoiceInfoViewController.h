//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class InvoiceInformationModel, NSMutableArray, NSString, UITableView;

@interface CTHotelInvoiceInfoViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_mInfoTableView;
    InvoiceInformationModel *_invoiceModel;
    NSMutableArray *_dispatchList;
}

@property(retain, nonatomic) NSMutableArray *dispatchList; // @synthesize dispatchList=_dispatchList;
@property(retain, nonatomic) InvoiceInformationModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) UITableView *mInfoTableView; // @synthesize mInfoTableView=_mInfoTableView;
- (void).cxx_destruct;
- (id)drawEmptyCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 array:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

