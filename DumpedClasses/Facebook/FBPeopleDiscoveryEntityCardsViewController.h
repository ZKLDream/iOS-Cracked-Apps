//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBRapidFeedbackSurveyManagerDelegate-Protocol.h"
#import "FBSearchResultsPilltersActivityListener-Protocol.h"

@class FBEntityCardsCollectionViewController, FBMemProfileDiscoveryBucket, FBNuxController, FBPeopleDiscoveryEntityCardsEmptyResultView, FBPeopleDiscoveryEntityCardsLoadingStateView, FBProfileCurationTagsRefreshTrigger, FBProfileDiscoveryBucketSessionLogger, FBProfileDiscoveryViewStateTracker, FBRapidFeedbackSurveyManager, FBSearchFilterGroup, FBSearchResultsPilltersActivityListenerAnnouncer, FBSearchResultsPilltersViewController, FBUserSession, NSArray, NSString, UIView;

@interface FBPeopleDiscoveryEntityCardsViewController : UIViewController <FBRapidFeedbackSurveyManagerDelegate, FBSearchResultsPilltersActivityListener>
{
    FBPeopleDiscoveryEntityCardsLoadingStateView *_loadingIndicatorView;
    FBUserSession *_session;
    _Bool _hasUpdatedEntityCards;
    NSString *_bucketId;
    FBProfileDiscoveryViewStateTracker *_viewStateTracker;
    FBProfileDiscoveryBucketSessionLogger *_analytics;
    NSArray *_bucketItemTypes;
    unsigned long long _selectedEntityIndex;
    FBProfileCurationTagsRefreshTrigger *_tagsRefreshTrigger;
    FBRapidFeedbackSurveyManager *_surveyManager;
    UIView *_profilePictureThumbnailView;
    FBSearchResultsPilltersViewController *_pilltersViewController;
    FBEntityCardsCollectionViewController *_discoveryEntityCardsViewController;
    FBSearchFilterGroup *_filterGroup;
    FBPeopleDiscoveryEntityCardsEmptyResultView *_emptyResultView;
    FBMemProfileDiscoveryBucket *_discoveryBucket;
    _Bool _shouldShowFiltersInBucket;
    FBSearchResultsPilltersActivityListenerAnnouncer *_pilltersActivityAnnouncer;
    FBNuxController *_nuxController;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (SEL)fb_actionForBackArrowButton;
- (_Bool)fb_hideNavBarRightButton;
- (_Bool)fb_showNavBarSearchField;
- (_Bool)fb_hidesNavigationBar;
- (_Bool)fb_hidesTabBar;
- (void)pilltersViewController:(id)arg1 didReceiveTapOnFilter:(id)arg2 withValue:(id)arg3 atIndex:(long long)arg4 actionType:(id)arg5;
- (void)applyModifiedFilterGroup:(id)arg1;
- (void)pilltersViewControllerDidClearAll:(id)arg1;
- (void)pilltersViewController:(id)arg1 didApplyChangeset:(id)arg2;
- (void)pilltersViewController:(id)arg1 didApplyValue:(id)arg2 forFilter:(id)arg3 atIndex:(long long)arg4;
- (void)surveyManager:(id)arg1 shouldDismiss:(_Bool)arg2;
- (void)didTapBackButton;
- (void)_didTapPeopleListButton;
- (void)_didTapNavigateToDashboard;
- (void)_didTapProfileEdit;
- (void)_didTapProfilePicture;
- (void)_updateWithFilterGroup:(id)arg1;
- (void)_presentEntityCardWithBucket:(id)arg1;
- (void)_presentEmptyResultView;
- (void)_sendQueryWithGraphQLInputFilters:(id)arg1;
- (id)analyticsUUID;
- (id)analyticsModule;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 analytics:(id)arg2 bucketId:(id)arg3 selectedEntityIndex:(unsigned long long)arg4 discoveryBucket:(id)arg5 shouldShowFiltersInBucket:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

