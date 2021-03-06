//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "QXTableViewDelegate-Protocol.h"
#import "QXUserSpaceDetailCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, QXTableView, QXUserSpaceService;

@interface QXUserSpaceDetailVC : QiXiuBaseVC <UITableViewDelegate, UITableViewDataSource, QXTableViewDelegate, QXUserSpaceDetailCellDelegate>
{
    QXUserSpaceService *_service;
    _Bool _hadCallLoadMore;
    long long _type;
    NSString *_userId;
    long long _originalStyle;
    QXTableView *_tableView;
    NSArray *_dataArray;
}

@property(nonatomic) _Bool hadCallLoadMore; // @synthesize hadCallLoadMore=_hadCallLoadMore;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) QXTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long originalStyle; // @synthesize originalStyle=_originalStyle;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)rpage;
- (void)reloadPage;
- (void)loadData:(_Bool)arg1;
- (void)tableView:(id)arg1 didTriggerLoadMore:(id)arg2;
- (void)tableView:(id)arg1 didTriggerRefresh:(id)arg2;
- (void)focusBtnDidClickedOfCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

