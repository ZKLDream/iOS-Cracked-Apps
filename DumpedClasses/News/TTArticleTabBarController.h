//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTabBarController.h"

#import "TTUIViewControllerTrackProtocol.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class ArticleCategoryManagerView, NSArray, NSString, TTBubbleView;

@interface TTArticleTabBarController : TTTabBarController <UITabBarControllerDelegate, UINavigationControllerDelegate, TTUIViewControllerTrackProtocol>
{
    NSArray *storyboardNames;
    NSArray *viewControllerNames;
    NSArray *tabBarItemImageKeys;
    NSArray *tabBarItemNameKeys;
    _Bool _isInvisble;
    _Bool _isBackground;
    TTBubbleView *_tabbarTipView;
    ArticleCategoryManagerView *_categoryManagerView;
}

+ (id)tabStayStringForIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isInvisble; // @synthesize isInvisble=_isInvisble;
@property(retain, nonatomic) ArticleCategoryManagerView *categoryManagerView; // @synthesize categoryManagerView=_categoryManagerView;
@property(retain, nonatomic) TTBubbleView *tabbarTipView; // @synthesize tabbarTipView=_tabbarTipView;
- (void).cxx_destruct;
- (void)trackBadgeWithLabel:(id)arg1 tabBarIndex:(unsigned long long)arg2;
- (void)postUGCPermissionUpdate:(id)arg1;
- (void)showPostUGCEntrance:(id)arg1;
- (void)applicationStatusBarDidRotate;
- (void)didChangeCategory;
- (void)showTabbarTip;
- (void)hideTabbarRefreshBubbleView;
- (void)showTabbarRefreshBubbleView;
- (void)sendLogForTabStayWithIndex:(unsigned long long)arg1 delayResetStayTime:(_Bool)arg2;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)closeCategoryManagerView:(id)arg1;
- (void)displayCategoryManagerView:(id)arg1;
- (void)refreshMyTabBadgeView;
- (void)refreshForumTabBadgeView;
- (void)refreshBadge;
- (void)receiveBadgeMangerChangedNotification:(id)arg1;
- (void)changeBadgeNumber:(id)arg1;
- (void)adShowFinish:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)showMessageNotificationTips:(id)arg1;
- (void)showTipViewIfNeededWithType:(unsigned long long)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)changeMineTabIconAndTitleIfNeed;
- (void)reloadTheme;
- (_Bool)isShowingConcernOrForumTab;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setViewControllers:(id)arg1;
- (void)addKVO;
- (void)constructTabItems;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initTabbarBadge;
- (void)registerNotification;
- (void)setupEssentialInitialization;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
