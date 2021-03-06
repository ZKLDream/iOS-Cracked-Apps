//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPBaseCardViewController.h"

#import "PPBaseCardDataDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface QYPPSearchMoreCircleViewController : PPBaseCardViewController <UITableViewDelegate, PPBaseCardDataDelegate>
{
    NSString *_navrTitle;
    NSString *_keyword;
    NSString *_pageURL;
}

@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *navrTitle; // @synthesize navrTitle=_navrTitle;
- (void).cxx_destruct;
- (id)pingbackForEvent:(id)arg1 ation:(unsigned long long)arg2 orgins:(id)arg3 cardData:(id)arg4;
- (void)qypp_navBackAction;
- (void)setupNavigationBar;
- (void)baseCardViewControllerDelayLoadMoreFailed;
- (void)baseCardViewControllerDelayLoadMoreFinished;
- (void)baseCardViewControllerLoadFinished;
- (void)resetTableView;
- (void)setURLDircectly:(id)arg1;
- (void)fetchData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

