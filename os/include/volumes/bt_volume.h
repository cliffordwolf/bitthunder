#ifndef _BT_VOLUME_H_
#define _BT_VOLUME_H_



BT_ERROR 	BT_EnumerateVolumes	(BT_BLKDEV_DESCRIPTOR *blk);
BT_s32 		BT_VolumeRead		(BT_HANDLE hVolume, BT_u32 ulAddress, BT_u32 ulBlocks, void *pBuffer);
BT_s32 		BT_VolumeWrite		(BT_HANDLE hVolume, BT_u32 ulAddress, BT_u32 ulBlocks, void *pBuffer);

#endif
