//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTCollectionPageViewController, UIScrollView;

@protocol TTCollectionPageViewControllerDelegate <NSObject>

@optional
- (void)pageCollectionViewWillBeginDragging:(UIScrollView *)arg1;
- (void)pageViewController:(TTCollectionPageViewController *)arg1 didPagingToIndex:(long long)arg2;
- (void)pageViewController:(TTCollectionPageViewController *)arg1 willPagingToIndex:(long long)arg2;
- (void)pageViewController:(TTCollectionPageViewController *)arg1 pagingFromIndex:(long long)arg2 toIndex:(long long)arg3 completePercent:(double)arg4;
@end

