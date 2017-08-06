//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableString;

@interface BasicParserAsset : NSObject
{
    NSArray *path;
    SEL function;
    id functionObject;
    SEL stringValueFunction;
    id stringValueObject;
    NSMutableString *stringCache;
}

@property(readonly) id stringValueObject; // @synthesize stringValueObject;
@property(retain) NSMutableString *stringCache; // @synthesize stringCache;
@property(readonly) SEL stringValueFunction; // @synthesize stringValueFunction;
@property(readonly) id functionObject; // @synthesize functionObject;
@property(readonly) SEL function; // @synthesize function;
@property(retain) NSArray *path; // @synthesize path;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 setStringValueFunction:(SEL)arg2 setStringValueObject:(id)arg3 callFunction:(SEL)arg4 functionObject:(id)arg5;

@end
