//
//  VVMIDIMessage.h
//  VVMIDI
//
//  Created by bagheera on 10/19/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreMIDI/CoreMIDI.h>



@interface VVMIDIMessage : NSObject <NSCopying> {
	Byte		type;
	Byte		channel;
	Byte		data1;		//	usually controller/note #
	Byte		data2;		//	usually controller/note value
}

+ (id) createWithType:(Byte)t channel:(Byte)c;
+ (id) createFromVals:(Byte)t:(Byte)c:(Byte)d1:(Byte)d2;
- (id) initWithType:(Byte)t channel:(Byte)c;
- (id) initFromVals:(Byte)t:(Byte)c:(Byte)d1:(Byte)d2;

- (NSString *) description;
- (NSString *) lengthyDescription;

- (Byte) type;
- (void) setType:(Byte)newType;
- (Byte) channel;
- (void) setData1:(Byte)newData;
- (Byte) data1;
- (void) setData2:(Byte)newData;
- (Byte) data2;

@end
