//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHPostEditImageBottomLayoutViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "XYPHPostEditImageStickersHistoryViewControllerDelegate.h"

@class NSString, XYPHBaseDataSource, XYPHPostEditBottoomStickersMyDataSource, XYPHPostEditImageBottomStickersTopicDataSource, XYPHSticker;

@interface XYPHPostEditImageBottomStickersViewController : XYPHPostEditImageBottomLayoutViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, XYPHPostEditImageStickersHistoryViewControllerDelegate>
{
    id <XYPHPostEditImageBottomStickersViewControllerDelegate> _delegate;
    XYPHSticker *_hightlightSticker;
    XYPHPostEditImageBottomStickersTopicDataSource *_stickersTopicDataSource;
    XYPHPostEditBottoomStickersMyDataSource *_stickersMyDataSource;
    XYPHBaseDataSource *_selectedDataSource;
}

@property(nonatomic) __weak XYPHBaseDataSource *selectedDataSource; // @synthesize selectedDataSource=_selectedDataSource;
@property(retain, nonatomic) XYPHPostEditBottoomStickersMyDataSource *stickersMyDataSource; // @synthesize stickersMyDataSource=_stickersMyDataSource;
@property(retain, nonatomic) XYPHPostEditImageBottomStickersTopicDataSource *stickersTopicDataSource; // @synthesize stickersTopicDataSource=_stickersTopicDataSource;
@property(nonatomic) __weak XYPHSticker *hightlightSticker; // @synthesize hightlightSticker=_hightlightSticker;
@property(nonatomic) __weak id <XYPHPostEditImageBottomStickersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickersMyButtonTouchUpInSide:(id)arg1;
- (void)stickersTopicButtonTouchUpInSide:(id)arg1;
- (void)postEditImageStickersHistoryViewController:(id)arg1 didSelectedSticker:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)requestStickerMy;
- (void)requestStickerTopic;
- (void)setup;
- (void)registerCollectionView;
- (id)stickersMyButton;
- (id)stickersTopicButton;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

