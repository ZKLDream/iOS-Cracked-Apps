//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface QYPPPubAlbumCollectionViewCell : UICollectionViewCell
{
    UIImageView *_coverImgView;
    UILabel *_countLabel;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void).cxx_destruct;
- (void)updateTitleLableConstraintsIfNeeded;
- (void)setData:(id)arg1;
- (void)awakeFromNib;

@end

