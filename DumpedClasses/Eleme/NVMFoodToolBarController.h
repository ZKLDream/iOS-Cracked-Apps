//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NVMFoodToolBar;

@interface NVMFoodToolBarController : NSObject
{
    _Bool _canOrderFood;
    _Bool _isDeliveryValid;
    NVMFoodToolBar *_toolBar;
    NSString *_restaurantID;
    unsigned long long _minPurchase;
    CDUnknownBlockType _willAddFoodAction;
    CDUnknownBlockType _willRemoveFoodAction;
    CDUnknownBlockType _willBeginActionBlock;
    CDUnknownBlockType _toolBarDidUpdatedBlock;
}

+ (void)assertSublassOverWriting;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType toolBarDidUpdatedBlock; // @synthesize toolBarDidUpdatedBlock=_toolBarDidUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType willBeginActionBlock; // @synthesize willBeginActionBlock=_willBeginActionBlock;
@property(copy, nonatomic) CDUnknownBlockType willRemoveFoodAction; // @synthesize willRemoveFoodAction=_willRemoveFoodAction;
@property(copy, nonatomic) CDUnknownBlockType willAddFoodAction; // @synthesize willAddFoodAction=_willAddFoodAction;
@property(nonatomic) unsigned long long minPurchase; // @synthesize minPurchase=_minPurchase;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(nonatomic) _Bool isDeliveryValid; // @synthesize isDeliveryValid=_isDeliveryValid;
@property(nonatomic) _Bool canOrderFood; // @synthesize canOrderFood=_canOrderFood;
@property(retain, nonatomic) NVMFoodToolBar *toolBar; // @synthesize toolBar=_toolBar;
- (void).cxx_destruct;
- (void)showAddAnimation;
- (id)foodsInCartDescription;
- (void)wrapButtonViewModel:(id)arg1 withExtraAction:(CDUnknownBlockType)arg2;
- (void)foodInCartChanged:(id)arg1;
- (id)removeButtonModelForVisuallyEnabled:(_Bool)arg1 highlightedEffectWhenDisabled:(_Bool)arg2;
- (id)addButtonModelForVisuallyEnabled:(_Bool)arg1 highlightedEffectWhenDisabled:(_Bool)arg2;
- (id)removeButtonImageForEnableState:(_Bool)arg1;
- (id)addButtonImageForEnableState:(_Bool)arg1;
- (id)addButtonViewModelForOutOfStock;
- (id)addButtonViewModelForDeliveryInvalid;
- (id)addButtonViewModelForRestaurantClose;
- (id)_addButtonViewModelForThisPass;
- (void)updateAddButton;
- (void)updateRemoveButtonAnimated:(_Bool)arg1;
- (void)updateNumberLabel;
- (void)updateToolbarAnimated:(_Bool)arg1;
- (void)updateToolbarWithRestaurantID:(id)arg1 canOrderFood:(_Bool)arg2 isDeliveryValid:(_Bool)arg3;
- (void)loadToolBar;
- (void)dealloc;
- (id)init;

@end

