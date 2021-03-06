//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class iQYMovieCarousel;

@protocol iQYMovieCarouselDelegate <NSObject>

@optional
- (double)QYMovieCarousel:(iQYMovieCarousel *)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)QYMovieCarousel:(iQYMovieCarousel *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)QYMovieCarouselItemWidth:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarousel:(iQYMovieCarousel *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)QYMovieCarousel:(iQYMovieCarousel *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)QYMovieCarouselDidEndDecelerating:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselWillBeginDecelerating:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselDidEndDragging:(iQYMovieCarousel *)arg1 willDecelerate:(_Bool)arg2;
- (void)QYMovieCarouselWillBeginDragging:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselCurrentItemIndexDidChange:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselDidScroll:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselDidEndScrollingAnimation:(iQYMovieCarousel *)arg1;
- (void)QYMovieCarouselWillBeginScrollingAnimation:(iQYMovieCarousel *)arg1;
@end

