//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImageView;

@interface XYPHPostAssetsCollectionViewCell : UICollectionViewCell
{
    id <XYPHPostAssetsCollectionViewCellDelegate> _delegate;
    UIImageView *_cellImageView;
    UIButton *_checkmarkButton;
    NSString *_representedAssetIdentifier;
}

@property(copy, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UIButton *checkmarkButton; // @synthesize checkmarkButton=_checkmarkButton;
@property(retain, nonatomic) UIImageView *cellImageView; // @synthesize cellImageView=_cellImageView;
@property(nonatomic) __weak id <XYPHPostAssetsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkmarkButtonTouchUpInside:(id)arg1;
- (void)config:(id)arg1 checkmarkSelected:(_Bool)arg2;
- (void)addCheckmarkButtonAnimation;
- (struct CGSize)targetSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

