//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel, XYPHBaseNoteListImagesScrollView;

@interface XYPHNoteImageCell : UICollectionViewCell
{
    XYPHBaseNoteListImagesScrollView *_imagesSrollView;
    UILabel *_pageLabel;
}

@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) XYPHBaseNoteListImagesScrollView *imagesSrollView; // @synthesize imagesSrollView=_imagesSrollView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)initilize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

