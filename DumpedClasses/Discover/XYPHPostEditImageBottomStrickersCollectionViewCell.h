//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface XYPHPostEditImageBottomStrickersCollectionViewCell : UICollectionViewCell
{
    UIImageView *_newStickerMask;
    UIImageView *_previewImageView;
    UILabel *_nameLabel;
}

+ (struct CGSize)size;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIImageView *newStickerMask; // @synthesize newStickerMask=_newStickerMask;
- (void).cxx_destruct;
- (void)config:(id)arg1;
- (void)setup;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
