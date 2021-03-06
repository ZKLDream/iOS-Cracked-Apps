//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNuxBannerViewController-Protocol.h"

@class FBItemView_DEPRECATED, FBNuxPromotionFooterContainerView, FBQPPromotion, FBQuickPromotionCoordinator, FBUserSession, NSString;
@protocol FBNuxBannerControllerDelegate;

@interface FBQuickPromotionWebviewBannerViewController : UIViewController <FBNuxBannerViewController>
{
    FBQPPromotion *_promotion;
    FBUserSession *_session;
    FBItemView_DEPRECATED *_itemContentSummaryView;
    id <FBNuxBannerControllerDelegate> _delegate;
    FBNuxPromotionFooterContainerView *_contentView;
    FBQuickPromotionCoordinator *_quickPromotionCoordinator;
}

@property(nonatomic) __weak FBQuickPromotionCoordinator *quickPromotionCoordinator; // @synthesize quickPromotionCoordinator=_quickPromotionCoordinator;
@property(retain, nonatomic) FBNuxPromotionFooterContainerView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <FBNuxBannerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContentOfView:(id)arg1;
- (void)_handleButtonTapEvent:(id)arg1;
- (void)_handleDismissButtonClick:(id)arg1;
- (void)_handlePrimaryButtonClick:(id)arg1;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithSession:(id)arg1 promotion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

