//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCardViewControllerV3.h"

#import "PPBaseCardViewContextDataSource-Protocol.h"
#import "PPPlayerDispatcherV3Delegate-Protocol.h"

@class NSDate, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, PPCardFakeDataFetcher, PPHugeButton, UITableView, UITableViewCell, UIViewController;
@protocol PPBaseCardDataDelegate, PPPlayerDispatcherV3Delegate;

@interface PPBaseCardViewController : QYCardViewControllerV3 <PPPlayerDispatcherV3Delegate, PPBaseCardViewContextDataSource>
{
    _Bool _wantsAbsoluteTime;
    _Bool _ignoreCache;
    _Bool _handleUVCountChange;
    _Bool _handleCommentCountChange;
    _Bool _handleLikeCountChange;
    _Bool _handleLikeForImageCount;
    _Bool _handleFeedDelete;
    _Bool _handleBlockDisplayEvent;
    _Bool _shouldShowPullRefresh;
    _Bool _handlePKVoteChange;
    _Bool _shouldHandleData;
    _Bool _shouldHandleDataFail;
    _Bool _shouldHandleEvent;
    _Bool _shouldHandlePingback;
    _Bool _handleShowPingback;
    _Bool _willSendPV;
    _Bool _shouldHandleFake;
    NSMutableDictionary *_cardContext;
    id <PPBaseCardDataDelegate> _cardTableViewDelegate;
    UIViewController<PPPlayerDispatcherV3Delegate> *_onController;
    UITableViewCell *_clickedCell;
    unsigned long long _pageDataCount;
    unsigned long long _pageIndex;
    double _consumTime;
    NSNumber *_requestAbsoluteTime;
    NSMutableArray *_arrAdStatsticsInfo;
    NSDate *_loadRequestTime;
    NSDictionary *_loadTypeDict;
    NSMutableSet *_cellShownRecords;
    PPHugeButton *_geniusTipButton;
    NSTimer *_geniusTipTimer;
    CDUnknownBlockType _didAddFeed;
    CDUnknownBlockType _uploadStatusChanged;
    CDUnknownBlockType _didCommitFeed;
    CDUnknownBlockType _didSendFeedFail;
    CDUnknownBlockType _didDeleteSendFail;
    NSMapTable *_fakeEntrys;
    NSDictionary *_fakeTemplate;
    PPCardFakeDataFetcher *_fakeDataFetcher;
}

@property(retain, nonatomic) PPCardFakeDataFetcher *fakeDataFetcher; // @synthesize fakeDataFetcher=_fakeDataFetcher;
@property(copy, nonatomic) NSDictionary *fakeTemplate; // @synthesize fakeTemplate=_fakeTemplate;
@property(retain, nonatomic) NSMapTable *fakeEntrys; // @synthesize fakeEntrys=_fakeEntrys;
@property(copy, nonatomic) CDUnknownBlockType didDeleteSendFail; // @synthesize didDeleteSendFail=_didDeleteSendFail;
@property(copy, nonatomic) CDUnknownBlockType didSendFeedFail; // @synthesize didSendFeedFail=_didSendFeedFail;
@property(copy, nonatomic) CDUnknownBlockType didCommitFeed; // @synthesize didCommitFeed=_didCommitFeed;
@property(copy, nonatomic) CDUnknownBlockType uploadStatusChanged; // @synthesize uploadStatusChanged=_uploadStatusChanged;
@property(copy, nonatomic) CDUnknownBlockType didAddFeed; // @synthesize didAddFeed=_didAddFeed;
@property(nonatomic) _Bool shouldHandleFake; // @synthesize shouldHandleFake=_shouldHandleFake;
@property(retain, nonatomic) NSTimer *geniusTipTimer; // @synthesize geniusTipTimer=_geniusTipTimer;
@property(retain, nonatomic) PPHugeButton *geniusTipButton; // @synthesize geniusTipButton=_geniusTipButton;
@property(nonatomic) _Bool willSendPV; // @synthesize willSendPV=_willSendPV;
@property(nonatomic) _Bool handleShowPingback; // @synthesize handleShowPingback=_handleShowPingback;
@property(nonatomic) _Bool shouldHandlePingback; // @synthesize shouldHandlePingback=_shouldHandlePingback;
@property(nonatomic) _Bool shouldHandleEvent; // @synthesize shouldHandleEvent=_shouldHandleEvent;
@property(nonatomic) _Bool shouldHandleDataFail; // @synthesize shouldHandleDataFail=_shouldHandleDataFail;
@property(nonatomic) _Bool shouldHandleData; // @synthesize shouldHandleData=_shouldHandleData;
@property(retain, nonatomic) NSMutableSet *cellShownRecords; // @synthesize cellShownRecords=_cellShownRecords;
@property(copy, nonatomic) NSDictionary *loadTypeDict; // @synthesize loadTypeDict=_loadTypeDict;
@property(copy, nonatomic) NSDate *loadRequestTime; // @synthesize loadRequestTime=_loadRequestTime;
@property(retain, nonatomic) NSMutableArray *arrAdStatsticsInfo; // @synthesize arrAdStatsticsInfo=_arrAdStatsticsInfo;
@property(nonatomic) _Bool handlePKVoteChange; // @synthesize handlePKVoteChange=_handlePKVoteChange;
@property(nonatomic) _Bool shouldShowPullRefresh; // @synthesize shouldShowPullRefresh=_shouldShowPullRefresh;
@property(nonatomic) _Bool handleBlockDisplayEvent; // @synthesize handleBlockDisplayEvent=_handleBlockDisplayEvent;
@property(nonatomic) _Bool handleFeedDelete; // @synthesize handleFeedDelete=_handleFeedDelete;
@property(nonatomic) _Bool handleLikeForImageCount; // @synthesize handleLikeForImageCount=_handleLikeForImageCount;
@property(nonatomic) _Bool handleLikeCountChange; // @synthesize handleLikeCountChange=_handleLikeCountChange;
@property(nonatomic) _Bool handleCommentCountChange; // @synthesize handleCommentCountChange=_handleCommentCountChange;
@property(nonatomic) _Bool handleUVCountChange; // @synthesize handleUVCountChange=_handleUVCountChange;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) _Bool wantsAbsoluteTime; // @synthesize wantsAbsoluteTime=_wantsAbsoluteTime;
@property(copy, nonatomic) NSNumber *requestAbsoluteTime; // @synthesize requestAbsoluteTime=_requestAbsoluteTime;
@property(nonatomic) double consumTime; // @synthesize consumTime=_consumTime;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long pageDataCount; // @synthesize pageDataCount=_pageDataCount;
@property(nonatomic) __weak UITableViewCell *clickedCell; // @synthesize clickedCell=_clickedCell;
@property(nonatomic) __weak UIViewController<PPPlayerDispatcherV3Delegate> *onController; // @synthesize onController=_onController;
@property(nonatomic) __weak id <PPBaseCardDataDelegate> cardTableViewDelegate; // @synthesize cardTableViewDelegate=_cardTableViewDelegate;
@property(retain, nonatomic) NSMutableDictionary *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (_Bool)hasPageURL;
- (void)sendPageViewPingback;
- (double)bottomHeight;
- (double)topHeight;
- (void)reloadViewIfNeed;
@property(readonly, nonatomic) UITableView *tableView;
- (void)feedPKVoteDidChange:(id)arg1;
- (void)feedDidDelete:(id)arg1;
- (void)feedLikeForImageCountDidChange:(id)arg1;
- (void)feedCommentForImageCountDidChange:(id)arg1;
- (void)feedCommentCountChange:(id)arg1;
- (void)feedUVCountChange:(id)arg1;
- (void)feedLikeCountDidChange:(id)arg1;
- (void)reloadPageCards:(id)arg1;
- (void)mergeADWithPage:(id)arg1 newPage:(id)arg2;
- (void)mergeWithPage:(id)arg1 newPage:(id)arg2;
- (id)clickCupidAdPingbackWithData:(id)arg1;
- (id)adArea2ClickArea:(id)arg1;
- (void)clickCupidAdWithEvent:(id)arg1;
- (void)adPingbackWithEvent:(id)arg1 action:(_Bool)arg2;
- (void)addAdStatisticsInfoWithRequestId:(id)arg1 adResultId:(long long)arg2 adIndex:(long long)arg3;
- (void)addAdStatisticsInfo:(id)arg1;
- (_Bool)isFocusResultIdExist:(long long)arg1 ad_index:(long long)arg2 checkIndex:(_Bool)arg3;
- (_Bool)isFocusResultIdExist:(long long)arg1;
- (_Bool)isFocusResultIdExist:(long long)arg1 ad_index:(long long)arg2;
- (id)currentAdsClientWithAdStr:(id)arg1;
- (_Bool)pingbackHandlerWithCard:(id)arg1;
- (void)closeShowStatisticGroup;
- (_Bool)shouldSendPingback:(id)arg1 event:(id)arg2 type:(unsigned long long)arg3 ation:(unsigned long long)arg4 cardData:(id)arg5;
- (void)parseAdMixer:(id)arg1;
- (void)p_dataLoadFinished:(id)arg1 dataLoadType:(long long)arg2 dataOnline:(_Bool)arg3;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)tickAbsoluteTime;
- (void)dataLoadManagerFailed:(id)arg1;
- (_Bool)handerPingbackRequestIfNeed:(id)arg1 event:(id)arg2 type:(unsigned long long)arg3 ation:(unsigned long long)arg4 cardData:(id)arg5;
- (void)handerPingbackRequest:(id)arg1 event:(id)arg2 type:(unsigned long long)arg3 ation:(unsigned long long)arg4 cardData:(id)arg5;
- (id)UrlWithRequestHeader:(id)arg1 baseUrl:(id)arg2;
- (void)handleClickStatistics:(id)arg1 cardData:(id)arg2;
- (void)handleWithEvent:(id)arg1 cell:(id)arg2;
- (void)loadNextData;
- (void)delayHandleShowStatistics;
- (void)delayRefreshNoMore;
- (void)delayLoadMoreFailed;
- (void)delayLoadMoreFinished;
- (void)delayRefreshFailed;
- (void)delayRefreshAndLoadMoreFinished;
- (void)delayRefreshFinished;
- (void)loadDataFailedNotice;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadToGetNextPageData;
- (void)pullUpToGetNextPageData;
- (void)reloadData;
- (void)loadData;
@property(readonly, nonatomic) _Bool hasNextPage;
@property(readonly, copy, nonatomic) NSDictionary *defaultRequestHeader;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)dispatcher;
- (void)dealloc;
- (id)init;
- (void)hideGeniusTip;
- (void)showGeniusTip:(id)arg1 inCell:(id)arg2;
- (void)didDeleteSendFail:(id)arg1;
- (void)didSendFeedFail:(id)arg1;
- (void)didCommitFeed:(id)arg1;
- (void)updateSection:(CDUnknownBlockType)arg1;
- (void)delayUpdate:(CDUnknownBlockType)arg1;
- (void)uploadStatusChanged:(id)arg1;
- (void)didAddFeed:(id)arg1;
- (long long)addFakeFeed:(id)arg1;
- (void)addFakeFeeds:(id)arg1;
- (void)noNeedHandleFake;
- (void)prepareHandleFake;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

