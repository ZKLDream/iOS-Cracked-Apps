//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView, XYPHStoreEventSaleBannerGoodsCellAdapter, XYPHStoreSaleEventBanner;

@interface XYPHStoreSaleEventBannerCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    XYPHStoreEventSaleBannerGoodsCellAdapter *_goodsAdapter;
    UIImageView *_bannerImageView;
    UIButton *_bannerImageButton;
    UILabel *_discountInfoLabel;
    UIImageView *_indicator;
    UICollectionView *_goodsCollectionView;
    XYPHStoreSaleEventBanner *_banner;
    UIView *_horizonalDividerView;
}

+ (struct CGSize)cellSizeWithBanner:(id)arg1;
@property(retain, nonatomic) UIView *horizonalDividerView; // @synthesize horizonalDividerView=_horizonalDividerView;
@property(nonatomic) __weak XYPHStoreSaleEventBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UICollectionView *goodsCollectionView; // @synthesize goodsCollectionView=_goodsCollectionView;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *discountInfoLabel; // @synthesize discountInfoLabel=_discountInfoLabel;
@property(retain, nonatomic) UIButton *bannerImageButton; // @synthesize bannerImageButton=_bannerImageButton;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) XYPHStoreEventSaleBannerGoodsCellAdapter *goodsAdapter; // @synthesize goodsAdapter=_goodsAdapter;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setCellWithSaleEvent:(id)arg1;
- (void)moreGoodsButtonClicked;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

