//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DMMapView, DMUserLocation, DiAnnotationView, DiMapPoi, NSError, NSString;

@protocol DMMapViewDelegate <NSObject>
- (void)mapView:(DMMapView *)arg1 didChangeScaleAnimated:(_Bool)arg2;
- (void)mapView:(DMMapView *)arg1 didChangeMapNaviShowingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)continueNavigationAfterDelay;
- (void)mapView:(DMMapView *)arg1 annotationId:(void *)arg2 animationKey:(NSString *)arg3 didFinishAnimation:(_Bool)arg4;
- (void)mapPositionChanged:(DMMapView *)arg1;
- (void)mapView:(DMMapView *)arg1 onClickedMapPoi:(DiMapPoi *)arg2;
- (void)mapView:(DMMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(DMMapView *)arg1 didDeselectAnnotationView:(DiAnnotationView *)arg2;
- (void)didChangeNaviStyle:(long long)arg1;
- (void)touchesWithOutCallout;
- (void)userTrackingModeNone;
- (void)touchesEndedEvent;
- (void)touchesBeganEvent;
- (void)userLocationErr:(NSString *)arg1;
- (void)mapView:(DMMapView *)arg1 willChangePositionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(DMMapView *)arg1 didChangePositionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(DMMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(DMMapView *)arg1 didUpdateUserLocation:(DMUserLocation *)arg2;
- (_Bool)checkCurrRunMapView;
@end

