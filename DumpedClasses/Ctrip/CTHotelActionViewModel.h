//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotelActionModel, NSString, TagStyleModel;

@interface CTHotelActionViewModel : NSObject
{
    HotelActionModel *_actionModel;
    NSString *_classToHandle;
    TagStyleModel *_tagStyle;
}

@property(retain, nonatomic) TagStyleModel *tagStyle; // @synthesize tagStyle=_tagStyle;
@property(copy, nonatomic) NSString *classToHandle; // @synthesize classToHandle=_classToHandle;
@property(retain, nonatomic) HotelActionModel *actionModel; // @synthesize actionModel=_actionModel;
- (void).cxx_destruct;
- (id)init;

@end

