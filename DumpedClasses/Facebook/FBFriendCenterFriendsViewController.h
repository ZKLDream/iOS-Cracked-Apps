//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBTableViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"
#import "FBFriendingViewControllerLoggingProtocol-Protocol.h"
#import "FBProfileFriendListDataSourceDelegate-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class FBAnimationPerformanceLogger, FBComponentTableViewDataSource, FBFriendingToolbox, FBListLogger, FBProfileFriendListDataSource, FBProfileFriendListPopoverActionSheetController, FBPullToRefreshView, FBUserSession, NSMutableArray, NSObject, NSString, UISearchBar;
@protocol FBProfileFriendListHelper;

@interface FBFriendCenterFriendsViewController : FBTableViewController <CKComponentProvider, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEventListener, FBComponentTableViewDataSourceSelectionEventListener, FBComponentScrollEventListener, FBComponentCellAppearanceEventListener, FBPullToRefreshViewDelegate, FBProfileFriendListDataSourceDelegate, UISearchBarDelegate, FBFriendingViewControllerLoggingProtocol>
{
    FBUserSession *_session;
    NSString *_targetID;
    id <FBProfileFriendListHelper> _helper;
    NSObject *_scenePath;
    FBFriendingToolbox *_toolbox;
    FBListLogger *_listLogger;
    NSString *_listLoggerUUID;
    _Bool _didFinishInitialLoad;
    FBAnimationPerformanceLogger *_animationPerfLogger;
    FBProfileFriendListDataSource *_dataSource;
    FBProfileFriendListPopoverActionSheetController *_popoverActionSheetController;
    FBComponentTableViewDataSource *_componentTableviewDatasource;
    FBPullToRefreshView *_pullToRefreshView;
    unsigned long long _numberOfSections;
    NSMutableArray *_numberOfItemsInSections;
    _Bool _isLoadingMore;
    UISearchBar *_searchBar;
    unsigned long long _numberOfFriendsSeen;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (id)newViewControllerWithSession:(id)arg1;
+ (_Bool)needRecreateOnAccess;
+ (id)menuItemDescription;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)finalizeLoggingForSurfaceName:(id)arg1;
- (void)_searchWithKeywords:(id)arg1;
- (void)_retry;
- (void)_removePersonFromTableview:(id)arg1;
- (void)_loadMorePeopleIntoTableviewFromStartPosition:(unsigned long long)arg1;
- (unsigned long long)_getIndexOfNextUnloadedPersonFromNumberOfItemsInSections;
- (void)_didTapOverflowButton:(id)arg1 person:(id)arg2 button:(id)arg3;
- (void)_didTapTextButton:(id)arg1 person:(id)arg2 button:(id)arg3;
- (void)_clearComponentTableViewDataSource;
- (void)markEndSectionComponentLoadingWithError:(id)arg1;
- (void)searchResultUpdatedWithHasResults:(_Bool)arg1;
- (void)person:(id)arg1 changedAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didFailLoadingDetailedFriendListWithError:(id)arg2;
- (void)dataSource:(id)arg1 didFailLoadingFullFriendListWithError:(id)arg2;
- (void)dataSourceDidFinishLoadingFullFriendListWithEmptyResponse:(id)arg1;
- (void)dataSource:(id)arg1 didFinishLoadingDetailedFriendListForIDs:(id)arg2;
- (void)dataSourceDidFinishLoadingFullFriendListWithOnlyBasicInformation:(id)arg1;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dataSourceDidEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (_Bool)fb_automaticallyAdjustsTableViewInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 targetID:(id)arg2 helper:(id)arg3;
- (id)analyticsModule;
- (unsigned long long)friendCenterPreferredPresentationMethod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

