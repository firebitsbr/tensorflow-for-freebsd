#!/bin/sh
DATASET_DIR=/mnt/data/ai/inception-v4/flower
TRAIN_DIR=/mnt/data/ai/inception-v4/flower-inception-v4
CHECKPOINT_PATH=/mnt/data/ai/inception-v4/inception_v3.ckpt

python train_image_classifier.py \
    --train_dir=${TRAIN_DIR} \
    --dataset_dir=${DATASET_DIR} \
    --dataset_name=flowers \
    --dataset_split_name=train \
    --model_name=inception_v3 \
    --checkpoint_path=${CHECKPOINT_PATH} \
    --checkpoint_exclude_scopes=InceptionV3/Logits,InceptionV3/AuxLogits \
    --trainable_scopes=InceptionV3/Logits,InceptionV4/AuxLogits
