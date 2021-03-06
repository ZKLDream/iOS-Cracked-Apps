//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GWHomePosterButtonView, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel;

@interface GWHomeBaseClassView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    NSMutableArray *_dataArray;
    NSString *_cellIdentifier;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    GWHomePosterButtonView *_posterButtonView;
    double _defaultHeight;
    double _heightWithoutCollection;
    double _homeBaseMargin;
    double _titleViewHeight;
    double _postViewHeight;
    double _cellWidth;
    double _cellHeight;
    double _cardTag;
}

@property(nonatomic) double cardTag; // @synthesize cardTag=_cardTag;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double postViewHeight; // @synthesize postViewHeight=_postViewHeight;
@property(nonatomic) double titleViewHeight; // @synthesize titleViewHeight=_titleViewHeight;
@property(nonatomic) double homeBaseMargin; // @synthesize homeBaseMargin=_homeBaseMargin;
@property(nonatomic) double heightWithoutCollection; // @synthesize heightWithoutCollection=_heightWithoutCollection;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(retain, nonatomic) GWHomePosterButtonView *posterButtonView; // @synthesize posterButtonView=_posterButtonView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadAllControls;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)posterViewClick:(id)arg1;
- (void)moreButtonClick:(id)arg1;
- (double)viewHeight;
- (void)updateData:(id)arg1;
- (void)updateView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

