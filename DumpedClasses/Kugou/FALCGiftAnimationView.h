//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface FALCGiftAnimationView : UIView
{
    long long _viewType;
    NSMutableArray *_cacheList;
    UIView *_groupAnimationView;
    UIView *_bannerAnimationView;
    long long _starId;
}

@property(nonatomic) long long starId; // @synthesize starId=_starId;
@property(retain, nonatomic) UIView *bannerAnimationView; // @synthesize bannerAnimationView=_bannerAnimationView;
@property(retain, nonatomic) UIView *groupAnimationView; // @synthesize groupAnimationView=_groupAnimationView;
@property(retain, nonatomic) NSMutableArray *cacheList; // @synthesize cacheList=_cacheList;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)clearAllGiftBannerAnimation;
- (void)clearAllAnimations;
- (void)dealloc;
- (float)getItemImamge:(float)arg1;
- (id)getLessThan50AnimationPoint:(long long)arg1;
- (void)clearGroupAnimationView;
- (void)clearAnimationSubViews;
- (void)groupAnimationWithItem:(id)arg1;
- (void)showGroupAnimationWithModel:(id)arg1;
- (id)getGiftGroupAnimationPoints:(long long)arg1;
- (void)startAnimation;
- (void)nextAnimation;
- (void)configAnimationViewWithConfig:(id)arg1;
- (void)configGiftAnimationWithSocketInfo:(id)arg1;
- (void)startGiftAnimationWithInfo:(id)arg1;
- (void)setStarUserId:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

