//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableView.h"

@interface NVMBreakfastContainerTableView : NVMTableView
{
    float contentOff_y;
    float secondSubContent_y;
    float firstSubContent_y;
    _Bool flag;
    double _stopHeight;
    double _subScrollViewContentOffset;
}

@property(nonatomic) double subScrollViewContentOffset; // @synthesize subScrollViewContentOffset=_subScrollViewContentOffset;
@property(nonatomic) double stopHeight; // @synthesize stopHeight=_stopHeight;
- (void)scrollViewDidScroll:(id)arg1 contentOffSetY:(double)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)init;

@end

