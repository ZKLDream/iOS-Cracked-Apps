//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXBitMatrix;

@interface ZXAztecCode : NSObject
{
    _Bool _compact;
    int _codeWords;
    int _layers;
    int _size;
    ZXBitMatrix *_matrix;
}

@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) ZXBitMatrix *matrix; // @synthesize matrix=_matrix;
@property(nonatomic) int layers; // @synthesize layers=_layers;
@property(nonatomic, getter=isCompact) _Bool compact; // @synthesize compact=_compact;
@property(nonatomic) int codeWords; // @synthesize codeWords=_codeWords;
- (void).cxx_destruct;

@end

