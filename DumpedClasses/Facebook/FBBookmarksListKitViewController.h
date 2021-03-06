//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksActionSheetControllerDelegate-Protocol.h"
#import "FBBookmarksAddFavoritesViewControllerDelegate-Protocol.h"
#import "FBBookmarksListKitEditShortcutsViewControllerDelegate-Protocol.h"
#import "FBBookmarksListKitScrollListenerAnnouncer-Protocol.h"
#import "FBBookmarksListKitTapHandler-Protocol.h"
#import "FBBookmarksNavigationHandlerDelegate-Protocol.h"

@class FBBookmarksNavigationHandler, FBListViewController, FBUserSession, NSDate, NSString;

@interface FBBookmarksListKitViewController : UIViewController <FBAccessibilityInvalidationEventsListener, FBBookmarksAddFavoritesViewControllerDelegate, FBBookmarksListKitScrollListenerAnnouncer, FBBookmarksNavigationHandlerDelegate, FBBookmarksActionSheetControllerDelegate, FBBookmarksListKitEditShortcutsViewControllerDelegate, FBBookmarksListKitTapHandler>
{
    FBListViewController *_listViewController;
    FBUserSession *_session;
    FBBookmarksNavigationHandler *_navigationHandler;
    NSString *_selectedBookmarkID;
    NSDate *_lastRefresh;
    _Bool _needsRefresh;
}

- (void).cxx_destruct;
- (_Bool)fb_enableChatBarButton;
- (void)bookmarksListKitEditShortcutsViewController:(id)arg1 finishedEditingWithChanges:(_Bool)arg2;
- (void)bookmarksActionSheetController:(id)arg1 tappedBookmark:(id)arg2;
- (void)handleHardcodedBookmark:(id)arg1 tappedView:(id)arg2;
- (void)didNavigateToBookmark:(id)arg1 navigationHandler:(id)arg2;
- (void)didReceiveAccessibilityInvalidation;
- (void)addFavoritesViewController:(id)arg1 addedNewFavorites:(id)arg2 optimistically:(_Bool)arg3;
- (void)removeComponentScrollEventListener:(id)arg1;
- (void)addComponentScrollEventListener:(id)arg1;
- (void)openEditShortcutsViewController;
- (void)openAddFavoritesViewController;
- (void)deleteFavoriteBookmark:(id)arg1 inSection:(id)arg2;
- (void)didTapBookmarkComponent:(id)arg1 withBookmark:(id)arg2 inSection:(id)arg3 atIndexPath:(id)arg4;
- (id)analyticsSourceExtras;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshDataForced;
- (void)refreshData;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

