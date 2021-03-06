//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "XYPHBranchTagViewDelegate.h"

@class NSArray, NSString, UIImage, XYPHNote;

@interface XYPHBaseNoteListImagesScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate, XYPHBranchTagViewDelegate>
{
    float _percentage;
    long long _index;
    UIImage *_coverPlaceholderImage;
    CDUnknownBlockType _indexChangeBlock;
    XYPHNote *_note;
    NSArray *_tagsInfoArray;
    long long _lastIndex;
}

@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(retain, nonatomic) NSArray *tagsInfoArray; // @synthesize tagsInfoArray=_tagsInfoArray;
@property(retain, nonatomic) XYPHNote *note; // @synthesize note=_note;
@property(copy, nonatomic) CDUnknownBlockType indexChangeBlock; // @synthesize indexChangeBlock=_indexChangeBlock;
@property(nonatomic) __weak UIImage *coverPlaceholderImage; // @synthesize coverPlaceholderImage=_coverPlaceholderImage;
@property long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)branchTagViewDidTapLocation:(id)arg1 branchTag:(id)arg2;
- (void)branchTagViewDidTapPrice:(id)arg1 branchTag:(id)arg2;
- (void)branchTagViewDidTapBrandAndGood:(id)arg1 branchTag:(id)arg2;
- (void)branchTagViewTapGesture:(id)arg1;
- (void)invalidateTagsView;
- (void)showImageTag:(long long)arg1;
- (void)checkImagesView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)layoutImagesView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initContentWithNote:(id)arg1 index:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

