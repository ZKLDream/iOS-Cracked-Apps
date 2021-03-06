//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FeedRelatedCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, QYPPFeedRelatedCirlclesSingleView, UICollectionView;

@interface QYPPFeedRelatedCirclesView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FeedRelatedCellDelegate>
{
    _Bool _isShowSingleView;
    _Bool _showJoinBtn;
    CDUnknownBlockType _handleLoginCallBack;
    CDUnknownBlockType _itemWillDisplay;
    CDUnknownBlockType _handleJoin;
    CDUnknownBlockType _handleEnter;
    NSString *_lastPage;
    NSString *_viewTitle;
    UICollectionView *_collectionView;
    QYPPFeedRelatedCirlclesSingleView *_singleContentView;
    UIView *_titleView;
    NSArray *_dataArr;
}

+ (id)transformTopicDataToViewData:(id)arg1;
+ (id)transformSearchResultRCModelToViewData:(id)arg1;
+ (id)transformVideoRCCollectModelModelToViewData:(id)arg1;
+ (id)transformJsonModelToViewData:(id)arg1;
+ (id)transformCardDataToViewData:(id)arg1;
+ (double)calculateViewHeightIsShowJoinBtn:(_Bool)arg1 isSingleView:(_Bool)arg2;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) QYPPFeedRelatedCirlclesSingleView *singleContentView; // @synthesize singleContentView=_singleContentView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(nonatomic) _Bool showJoinBtn; // @synthesize showJoinBtn=_showJoinBtn;
@property(retain, nonatomic) NSString *lastPage; // @synthesize lastPage=_lastPage;
@property(copy, nonatomic) CDUnknownBlockType handleEnter; // @synthesize handleEnter=_handleEnter;
@property(copy, nonatomic) CDUnknownBlockType handleJoin; // @synthesize handleJoin=_handleJoin;
@property(copy, nonatomic) CDUnknownBlockType itemWillDisplay; // @synthesize itemWillDisplay=_itemWillDisplay;
@property(copy, nonatomic) CDUnknownBlockType handleLoginCallBack; // @synthesize handleLoginCallBack=_handleLoginCallBack;
- (void).cxx_destruct;
- (void)enterCircleClick:(id)arg1 itemIndex:(int)arg2 isClickEnterBtn:(_Bool)arg3;
- (void)updateButtonStatusInView:(id)arg1 hasJoin:(_Bool)arg2;
- (void)joinCircleClick:(id)arg1 view:(id)arg2;
- (void)updateViewWithViewDatas:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)p_setUpView;
- (void)layoutSubviews;
- (void)updateSubviews;
- (id)initWithTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

