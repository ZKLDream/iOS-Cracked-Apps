//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

@class NSMutableArray;

@interface UserSummaryPhotosCell : UserSummaryBaseCell
{
    NSMutableArray *_imageUrlArray;
    NSMutableArray *_imageViewArray;
}

@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) NSMutableArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
- (void).cxx_destruct;
- (double)getLeftOffByUsedType:(long long)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (void)layoutSubviews;
- (void)setSumUrlArray:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

